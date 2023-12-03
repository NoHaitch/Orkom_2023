# Konversi dan tulis ke stdout file berisikan hex ke bytes
import binascii  # Digunakan untuk merubah string berisikan hex ke bytes
import sys  # Digunakan untuk mengambil argumen pada command line


def main():
    cmd_arguments = sys.argv                   # Ambil argv dari command line
    payload       = b""

    if len(cmd_arguments) > 3:
        print("Invalid arguments!")
        print("Usage: hex2raw.py, hex2raw.py <nim> <challenge-id>")
        exit(-1)

    elif len(cmd_arguments) == 3:       # Digunakan untuk send payload ke server
        nim     = "13522091;84fd05c1"              # Ambil NIM dari argv, bertipe data python string
        challenge_id = cmd_arguments[2]         # challenge_id from argv, string
        
        # Encode NIM
        payload += nim.encode("ascii")         # Konversi python string ke ASCII char bytes
        payload += b"\n"                       # Tambahkan newline setelah input NIM pada payload

        # Encode challenge_id
        payload += challenge_id.encode("ascii") # Konversi python string ke ASCII char bytes
        payload += b"\n"                        # Tambahkan newline setelah challenge_id pada payload

    # else: digunakan untuk debug dalam env local

    # Encode payload untuk mengakses flag
    with open("input.txt", "r") as src:
        raw     = src.read()                   # Baca seluruh text file
        raw     = raw.replace(" ", "")         # Hapus seluruh spasi pada string
        raw     = raw.replace("\r", "")        # Hapus seluruh carriage return (CR) pada string
        raw     = raw.replace("\n", "")        # Hapus seluruh line feed (LF) pada string
        payload += binascii.unhexlify(raw)     # Konversi hex pada string menjadi bytes
        payload += b"\n"                       # Tambahkan enter pada akhir payload

    sys.stdout.buffer.write(payload)           # Tuliskan payload ke stdout


if __name__ == '__main__':
    main()
