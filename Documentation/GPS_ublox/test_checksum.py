def test(packet,cA,cB):
    CK_A,CK_B = 0, 0
    for i in range(len(packet)):
        CK_A += packet[i]
        CK_B += CK_A

    # ensure unsigned byte range
    CK_A = CK_A & 0xFF
    CK_B = CK_B & 0xFF
    print(CK_A==cA,CK_B==cB)

packet1,cA1,cB1=[0x01,0x3C,0x40,0x01,0x08,0xC9,0x5D,0x12,0x01],0xBF,0x03
packet2,cA2,cB2=[0x01,0x3C,0x40,0x01,0xD0,0xC9,0x5D,0x12,0x01],0x87,0xE3
packet3,cA3,cB3=[0x01,0x3C,0x40,0x01,0x98,0xCA,0x5D,0x12,0x01],0x50,0xFE
test(packet1,cA1,cB1)
test(packet2,cA2,cB2)
test(packet3,cA3,cB3)
