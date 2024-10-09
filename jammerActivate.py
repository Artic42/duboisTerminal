import requests


def main() -> None:
    url = "http://lsbapi.artic42.com/jammer/activate"
    payload = {}
    headers = {}
    response = requests.request("PUT", url, headers=headers, data=payload)
    if response.json()["status"] == 200:
        print("Jammer activated")
        print("Jammer activado")
    else:
        print("Jammer system in error")
        print("Sistema de jammer en error")


if __name__ == "__main__":
    main()