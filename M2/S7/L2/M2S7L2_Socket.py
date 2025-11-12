import socket

SRV_ADDR = "192.168.50.100"
SRV_PORT = 44444

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((SRV_ADDR, SRV_PORT))
print("UDP Server started! waiting for messages...")

while 1:
    data, addr = s.recvfrom(1024)
    if not data: break
    print(f"From {addr}: {data!r}")
