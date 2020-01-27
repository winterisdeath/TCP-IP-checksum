# TCP-IP-checksum
Simple TCP and IP checksum calculation on C++

1. "new_vec" - raw bytes of packet with IP + TCP + Payload, TCP part has odd length 
2. "vec" -  raw bytes of packet with only IP + TCP (no Payload), has even length
This bytes was got from wireshark.
It is using only for tests.
