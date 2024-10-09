import requests


def main() -> None:
    url = "http://lsbapi.artic42.com/jammer/activated"
    payload = {}
    headers = {}
    response = requests.request("GET", url, headers=headers, data=payload)
    if response.json()["activated"] == 1:
        print("Jammer is activated, no radio transmission possible")
        print("Jammer activado, no es posible la transmisión de radio")
    else:
        print("Jammer is not activated, radio transmission is possible")
        print("Jammer no activado, es posible la transmisión de radio")
        


if __name__ == "__main__":
    main()