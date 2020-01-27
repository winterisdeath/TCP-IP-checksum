#include <iostream>
#include <vector>

using namespace std;

typedef unsigned char  uchar;
typedef unsigned short ushort;
typedef unsigned int   uint;


// 0x284e
vector<uchar> new_vec =
{
    0x50, 0x64, 0x2b, 0x4d, 0x24, 0xa3, 0x94, 0x65, 0x9c, 0xba, 0xb3, 0xb9, 0x08, 0x00, 0x45, 0x00,
    0x02, 0x2d, 0x12, 0x3d, 0x40, 0x00, 0x80, 0x06, 0x2a, 0x33, 0xc0, 0xa8, 0x1f, 0x5c, 0xd9, 0x41,
    0x03, 0x15, 0xc3, 0x50, 0x01, 0xbb, 0x08, 0x1f, 0x6b, 0x95, 0x0a, 0x41, 0x93, 0xa1, 0x50, 0x18,
    0x02, 0x01, 0x28, 0x4e, 0x00, 0x00, 0x16, 0x03, 0x01, 0x02, 0x00, 0x01, 0x00, 0x01, 0xfc, 0x03,
    0x03, 0x33, 0x21, 0xe2, 0xac, 0xd2, 0xf9, 0x4c, 0xed, 0x5c, 0x05, 0x33, 0x58, 0x48, 0x8d, 0x97,
    0xf8, 0x8c, 0x8e, 0x0a, 0x9d, 0x9a, 0x5b, 0x73, 0xb5, 0x46, 0x5a, 0x4d, 0xce, 0xde, 0x94, 0x0b,
    0x23, 0x20, 0xf4, 0x0f, 0xb8, 0x62, 0x13, 0x2a, 0x5b, 0x6e, 0x91, 0x28, 0x9a, 0x88, 0x62, 0xe2,
    0xda, 0xd1, 0x47, 0xe3, 0x6f, 0x67, 0x67, 0x84, 0x02, 0x47, 0x60, 0xdd, 0x35, 0x30, 0x44, 0x82,
    0x50, 0x8c, 0x00, 0x22, 0x7a, 0x7a, 0x13, 0x01, 0x13, 0x02, 0x13, 0x03, 0xc0, 0x2b, 0xc0, 0x2f,
    0xc0, 0x2c, 0xc0, 0x30, 0xcc, 0xa9, 0xcc, 0xa8, 0xc0, 0x13, 0xc0, 0x14, 0x00, 0x9c, 0x00, 0x9d,
    0x00, 0x2f, 0x00, 0x35, 0x00, 0x0a, 0x01, 0x00, 0x01, 0x91, 0x4a, 0x4a, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x13, 0x00, 0x11, 0x00, 0x00, 0x0e, 0x77, 0x77, 0x77, 0x2e, 0x6f, 0x70, 0x65, 0x6e, 0x6e,
    0x65, 0x74, 0x2e, 0x72, 0x75, 0x00, 0x17, 0x00, 0x00, 0xff, 0x01, 0x00, 0x01, 0x00, 0x00, 0x0a,
    0x00, 0x0a, 0x00, 0x08, 0xda, 0xda, 0x00, 0x1d, 0x00, 0x17, 0x00, 0x18, 0x00, 0x0b, 0x00, 0x02,
    0x01, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x0c, 0x02, 0x68, 0x32, 0x08,
    0x68, 0x74, 0x74, 0x70, 0x2f, 0x31, 0x2e, 0x31, 0x00, 0x05, 0x00, 0x05, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0d, 0x00, 0x14, 0x00, 0x12, 0x04, 0x03, 0x08, 0x04, 0x04, 0x01, 0x05, 0x03, 0x08,
    0x05, 0x05, 0x01, 0x08, 0x06, 0x06, 0x01, 0x02, 0x01, 0x00, 0x12, 0x00, 0x00, 0x00, 0x33, 0x00,
    0x2b, 0x00, 0x29, 0xda, 0xda, 0x00, 0x01, 0x00, 0x00, 0x1d, 0x00, 0x20, 0xa9, 0x66, 0x7f, 0xcb,
    0x3d, 0xd5, 0x16, 0x28, 0x40, 0xbf, 0x16, 0x38, 0xa9, 0xbc, 0xfa, 0xee, 0xbf, 0xaa, 0x02, 0xeb,
    0x81, 0x4c, 0xa3, 0x8e, 0x32, 0xa3, 0xb8, 0xa3, 0x7a, 0xd9, 0xd6, 0x05, 0x00, 0x2d, 0x00, 0x02,
    0x01, 0x01, 0x00, 0x2b, 0x00, 0x0b, 0x0a, 0x4a, 0x4a, 0x03, 0x04, 0x03, 0x03, 0x03, 0x02, 0x03,
    0x01, 0x00, 0x1b, 0x00, 0x03, 0x02, 0x00, 0x02, 0x7a, 0x7a, 0x00, 0x01, 0x00, 0x00, 0x15, 0x00,
    0xca, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

ushort tcp_sum(uchar *buffer, ushort tcp_len);
ushort ip_sum(uchar *buffer);

int main()
{
    //    0x04a0
                                                                                           /* 14 dec */
    std::vector<unsigned short> vec =
    {
        0x08, 0x00, 0x27, 0xd7, 0x08, 0x5b, 0x08, 0x00, 0x27, 0x47, 0x9c, 0xbd, 0x08, 0x00, 0x45, 0x00,
        0x00, 0x2c, 0xb0, 0x63, 0x00, 0x00, 0x35, 0x06, 0xc1, 0x66, 0x0a, 0x00, 0x00, 0x02, 0x0a, 0x00,
        0x00, 0x01, 0x9f, 0xad, 0x1f, 0x90, 0x77, 0x09, 0x45, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x60, 0x02,
        0x04, 0x00, 0x04, 0xa0, 0x00, 0x00, 0x02, 0x04, 0x05, 0xb4
    };
    std::vector<unsigned short> vec_tcp =
    {
        0x9fad, 0x1f90, 0x7709, 0x453d, 0x0000, 0x0000, 0x6002,
        0x0400, 0x04a0, 0x0000, 0x0204, 0x05b4
    };

    //    unsigned char *buffer = new uchar[1500];
    uchar buffer[1500];
        for (size_t i = 0; i < new_vec.size(); i++)
            buffer[i] = new_vec[i];
    //        cout << hex << "0x" << (uint)buffer[i] << endl;

//    for (size_t i = 0; i < vec.size(); i++)
//        buffer[i] = vec[i];
    //        cout << hex << "0x" << (uint)buffer[i] << endl;


    /* -- Get lenght of IP packet (IP + other proto + payload) -- */
    ushort ip_len = (uint)((buffer[0x10] << 8) & 0xff00 ) | (buffer[0x11] & 0x00ff);
    cout << "ip: " << ip_len << endl;
    ushort tcp_len = ip_len - (buffer[0x0e]  & 0b00001111) * 4;
    cout << "tcp: " << tcp_len << endl;
    ushort pseudo_len = tcp_len + 12;
    cout << "pseudo: " << pseudo_len << endl;


    cout << hex << "----------\n";
    ushort chsum = tcp_sum(buffer, tcp_len);
    cout << "tcp chsum: " << chsum << endl;

    chsum = ip_sum(buffer);
    cout << "ip chsum: " << chsum;

    return 0;
}


ushort tcp_sum(uchar *buffer, ushort tcp_len)
{
    uint sum = 0;
    uchar start = 0x22;  // START of TCP HEADER in packet
    uchar* tcp_header = buffer + start;

    /* -- Pseudo TCP header -- */
    // Add source
    sum += ((buffer[0x1a] << 8) & 0xff00) | (buffer[0x1b] & 0x00ff);
    sum += ((buffer[0x1c] << 8) & 0xff00) | (buffer[0x1d] & 0x00ff);

    // Add destination to sum
    sum += ((buffer[0x1e] << 8) & 0xff00) | (buffer[0x1f]& 0x00ff);
    sum += ((buffer[0x20] << 8) & 0xff00) | (buffer[0x21]& 0x00ff);

    sum += 0x0006; // RESERVED + PROTOCOL
    sum += tcp_len;

    /* -- TCP + PAYLOAD -- */
    for (ushort i = 0; i < tcp_len - 2; i += 2)
        sum += ((tcp_header[i] << 8) & 0xff00)
                | (tcp_header[i + 1] & 0x00ff);
    if (tcp_len % 2 == 0)
        sum += ((tcp_header[tcp_len - 2] << 8) & 0xff00)
                | (tcp_header[tcp_len - 2 + 1] & 0x00ff);
    else
        sum += ((tcp_header[tcp_len - 2] << 8) & 0xff00);

    // Simple sub the current checksum that was already add
    sum -= ((tcp_header[16] << 8) & 0xff00)
            | (tcp_header[17] & 0x00ff);

    while (sum >> 16)
        sum = (sum & 0xFFFF) + (sum >> 16);

    return (~sum);
}

ushort ip_sum (uchar * buffer)
{
    uchar start = 0x0e;
    uchar *ip_header = buffer + start; // START of IP HEADER in packet
    uint sum = 0;
    uchar ip_len = (*ip_header & 0b00001111) * 4;
    for (ushort i = 0; i < ip_len; i += 2)
        sum += ((ip_header[i] << 8) & 0xff00)
                | (ip_header[i + 1] & 0x00ff);

    // Simple sub the current checksum that was already add
    sum -= ((ip_header[10] << 8) & 0xff00) | (ip_header[11] & 0x00ff);

    while (sum >> 16)
        sum = (sum & 0xFFFF) + (sum >> 16);
    return ~sum;
}
