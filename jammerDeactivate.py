import requests


def main() -> None:
    url = "http://lsbapi.artic42.com/jammer/deactivate"
    payload = {}
    headers = {}
    response = requests.request("PUT", url, headers=headers, data=payload)
    if response.json()["status"] == 200:
        print("Jammer deactivated")
        print("Jammer desactivado")
    else:
        print("Jammer system in error")
        print("Sistema de jammer en error")


if __name__ == "__main__":
    main()