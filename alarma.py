import requests


URL = "https://ntfy.artic42.com/LiveRPG"



requests.post(URL,
            data="Alarma activada en el terminal",
            headers={
                "Title": "ALARM ACTIVATED",
                "Priority": "urgent",
                "Tags": "warning"
            })


