#include "aux_macro.h"
#include "../malloc_4.cpp"
#include <iostream>

void printStats()
                    {
                        std::cout << "_num_free_blocks: " << _num_free_blocks() << std::endl;
                        std::cout << "_num_free_bytes: " << _num_free_bytes() << std::endl;
                        std::cout << "_num_allocated_blocks: " << _num_allocated_blocks() << std::endl;
                        std::cout << "_num_allocated_bytes: " << _num_allocated_bytes() << std::endl;
                        std::cout << "_num_meta_data_bytes: " << _num_meta_data_bytes() << std::endl;
                        std::cout << "_size_meta_data: " << _size_meta_data() << std::endl;
                    }
                    int main()
                    {
                        PRINT_POINTER(scalloc(134,68););
printStats();
void* p0 = last_address;
PRINT_POINTER(scalloc(79,142););
printStats();
void* p1 = last_address;
PRINT_POINTER(scalloc(0,101););
printStats();
void* p2 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(smalloc(129););
printStats();
void* p3 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p2,41););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p0,102););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
DEBUG_PRINT(sfree(p5););
printStats();
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(scalloc(190,60););
printStats();
void* p7 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p3,225););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(150,209););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(scalloc(40,141););
printStats();
void* p11 = last_address;
PRINT_POINTER(scalloc(240,149););
printStats();
void* p12 = last_address;
PRINT_POINTER(scalloc(161,144););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(136,34););
printStats();
void* p14 = last_address;
PRINT_POINTER(srealloc(p8,181););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(149,95););
printStats();
void* p16 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(smalloc(40););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(scalloc(25,45););
printStats();
void* p18 = last_address;
PRINT_POINTER(srealloc(p10,125););
printStats();
void* p19 = last_address;
PRINT_POINTER(smalloc(90););
printStats();
void* p20 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(161,66););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(243,49););
printStats();
void* p23 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(srealloc(p18,107););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p22,203););
printStats();
void* p25 = last_address;
PRINT_POINTER(srealloc(p13,59););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p20,238););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p28 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p29 = last_address;
PRINT_POINTER(smalloc(215););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(212,137););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(107););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p33 = last_address;
PRINT_POINTER(srealloc(p28,19););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(38););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(144,16););
printStats();
void* p36 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(47,179););
printStats();
void* p38 = last_address;
PRINT_POINTER(scalloc(91,244););
printStats();
void* p39 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(scalloc(221,48););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p24););
printStats();
PRINT_POINTER(scalloc(80,82););
printStats();
void* p41 = last_address;
PRINT_POINTER(smalloc(195););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p43 = last_address;
PRINT_POINTER(srealloc(p15,61););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p11,39););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p45,20););
printStats();
void* p46 = last_address;
PRINT_POINTER(scalloc(224,222););
printStats();
void* p47 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p41,99););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(12,218););
printStats();
void* p50 = last_address;
PRINT_POINTER(srealloc(p46,36););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(198,225););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(158,214););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p31););
printStats();
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(srealloc(p51,102););
printStats();
void* p54 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
PRINT_POINTER(scalloc(51,102););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p29););
printStats();
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(scalloc(184,152););
printStats();
void* p56 = last_address;
PRINT_POINTER(srealloc(p42,233););
printStats();
void* p57 = last_address;
PRINT_POINTER(srealloc(p49,40););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
DEBUG_PRINT(sfree(p57););
printStats();
DEBUG_PRINT(sfree(p27););
printStats();
DEBUG_PRINT(sfree(p56););
printStats();
PRINT_POINTER(smalloc(64););
printStats();
void* p59 = last_address;
PRINT_POINTER(smalloc(26););
printStats();
void* p60 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
DEBUG_PRINT(sfree(p35););
printStats();
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(smalloc(210););
printStats();
void* p61 = last_address;
PRINT_POINTER(scalloc(164,156););
printStats();
void* p62 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p63 = last_address;
PRINT_POINTER(scalloc(40,193););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(216););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p26,122););
printStats();
void* p66 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(smalloc(108););
printStats();
void* p67 = last_address;
PRINT_POINTER(scalloc(208,231););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(scalloc(60,214););
printStats();
void* p69 = last_address;
PRINT_POINTER(scalloc(188,159););
printStats();
void* p70 = last_address;
PRINT_POINTER(scalloc(223,175););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(39,179););
printStats();
void* p72 = last_address;
PRINT_POINTER(srealloc(p44,244););
printStats();
void* p73 = last_address;
DEBUG_PRINT(sfree(p19););
printStats();
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(scalloc(10,248););
printStats();
void* p74 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(smalloc(248););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(245,206););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p47,107););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p63););
printStats();
PRINT_POINTER(srealloc(p43,58););
printStats();
void* p79 = last_address;
PRINT_POINTER(smalloc(41););
printStats();
void* p80 = last_address;
PRINT_POINTER(scalloc(241,193););
printStats();
void* p81 = last_address;
PRINT_POINTER(scalloc(238,50););
printStats();
void* p82 = last_address;
PRINT_POINTER(scalloc(116,249););
printStats();
void* p83 = last_address;
PRINT_POINTER(srealloc(p68,209););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(89,56););
printStats();
void* p85 = last_address;
PRINT_POINTER(srealloc(p83,156););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(121,179););
printStats();
void* p87 = last_address;
PRINT_POINTER(scalloc(114,103););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(69););
printStats();
void* p89 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p90 = last_address;
PRINT_POINTER(scalloc(73,28););
printStats();
void* p91 = last_address;
PRINT_POINTER(smalloc(218););
printStats();
void* p92 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(srealloc(p30,114););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p76););
printStats();
DEBUG_PRINT(sfree(p48););
printStats();
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(srealloc(p78,172););
printStats();
void* p95 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(srealloc(p88,170););
printStats();
void* p96 = last_address;
PRINT_POINTER(scalloc(214,126););
printStats();
void* p97 = last_address;
PRINT_POINTER(scalloc(39,168););
printStats();
void* p98 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p99 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(scalloc(98,240););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p93,141););
printStats();
void* p101 = last_address;
PRINT_POINTER(srealloc(p74,140););
printStats();
void* p102 = last_address;
PRINT_POINTER(srealloc(p80,49););
printStats();
void* p103 = last_address;
PRINT_POINTER(srealloc(p65,159););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p92,125););
printStats();
void* p105 = last_address;
PRINT_POINTER(scalloc(132,172););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(87,47););
printStats();
void* p107 = last_address;
PRINT_POINTER(scalloc(175,39););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p67,96););
printStats();
void* p109 = last_address;
PRINT_POINTER(srealloc(p95,135););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(174););
printStats();
void* p111 = last_address;
PRINT_POINTER(scalloc(157,246););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p53););
printStats();
PRINT_POINTER(scalloc(31,16););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(43););
printStats();
void* p114 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p115 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p116 = last_address;
PRINT_POINTER(srealloc(p21,160););
printStats();
void* p117 = last_address;
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(smalloc(239););
printStats();
void* p118 = last_address;
PRINT_POINTER(smalloc(193););
printStats();
void* p119 = last_address;
PRINT_POINTER(smalloc(24););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(203,44););
printStats();
void* p121 = last_address;
PRINT_POINTER(smalloc(3););
printStats();
void* p122 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(srealloc(p104,64););
printStats();
void* p123 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(srealloc(p73,19););
printStats();
void* p124 = last_address;
PRINT_POINTER(srealloc(p94,55););
printStats();
void* p125 = last_address;
PRINT_POINTER(smalloc(32););
printStats();
void* p126 = last_address;
PRINT_POINTER(scalloc(242,244););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(smalloc(165););
printStats();
void* p128 = last_address;
PRINT_POINTER(smalloc(26););
printStats();
void* p129 = last_address;
PRINT_POINTER(srealloc(p86,213););
printStats();
void* p130 = last_address;
PRINT_POINTER(srealloc(p114,179););
printStats();
void* p131 = last_address;
PRINT_POINTER(srealloc(p129,222););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p133 = last_address;
PRINT_POINTER(srealloc(p118,141););
printStats();
void* p134 = last_address;
PRINT_POINTER(scalloc(139,78););
printStats();
void* p135 = last_address;
DEBUG_PRINT(sfree(p119););
printStats();
PRINT_POINTER(scalloc(112,133););
printStats();
void* p136 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(smalloc(154););
printStats();
void* p137 = last_address;
PRINT_POINTER(scalloc(208,105););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(smalloc(140););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(220,230););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p141 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p142 = last_address;
PRINT_POINTER(scalloc(154,133););
printStats();
void* p143 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p144 = last_address;
PRINT_POINTER(srealloc(p132,101););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p77,17););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(242););
printStats();
void* p147 = last_address;
PRINT_POINTER(srealloc(p125,51););
printStats();
void* p148 = last_address;
PRINT_POINTER(srealloc(p60,158););
printStats();
void* p149 = last_address;
PRINT_POINTER(smalloc(69););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
PRINT_POINTER(smalloc(26););
printStats();
void* p151 = last_address;
PRINT_POINTER(smalloc(8););
printStats();
void* p152 = last_address;
PRINT_POINTER(scalloc(171,134););
printStats();
void* p153 = last_address;
PRINT_POINTER(scalloc(92,205););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p155 = last_address;
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(srealloc(p40,143););
printStats();
void* p156 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(scalloc(56,180););
printStats();
void* p157 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
DEBUG_PRINT(sfree(p143););
printStats();
PRINT_POINTER(srealloc(p113,7););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(8,67););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p71,109););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(167););
printStats();
void* p161 = last_address;
PRINT_POINTER(srealloc(p126,179););
printStats();
void* p162 = last_address;
DEBUG_PRINT(sfree(p148););
printStats();
PRINT_POINTER(srealloc(p105,206););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(smalloc(200););
printStats();
void* p164 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p165 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p166 = last_address;
PRINT_POINTER(scalloc(74,92););
printStats();
void* p167 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p168 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p169 = last_address;
PRINT_POINTER(smalloc(31););
printStats();
void* p170 = last_address;
PRINT_POINTER(scalloc(15,196););
printStats();
void* p171 = last_address;
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(srealloc(p139,175););
printStats();
void* p172 = last_address;
PRINT_POINTER(scalloc(17,91););
printStats();
void* p173 = last_address;
PRINT_POINTER(scalloc(84,114););
printStats();
void* p174 = last_address;
PRINT_POINTER(smalloc(152););
printStats();
void* p175 = last_address;
PRINT_POINTER(scalloc(7,234););
printStats();
void* p176 = last_address;
PRINT_POINTER(scalloc(151,238););
printStats();
void* p177 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p178 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
DEBUG_PRINT(sfree(p170););
printStats();
PRINT_POINTER(scalloc(235,177););
printStats();
void* p180 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(srealloc(p140,238););
printStats();
void* p181 = last_address;
PRINT_POINTER(srealloc(p82,158););
printStats();
void* p182 = last_address;
PRINT_POINTER(smalloc(180););
printStats();
void* p183 = last_address;
DEBUG_PRINT(sfree(p172););
printStats();
DEBUG_PRINT(sfree(p98););
printStats();
DEBUG_PRINT(sfree(p128););
printStats();
PRINT_POINTER(srealloc(p133,42););
printStats();
void* p184 = last_address;
PRINT_POINTER(srealloc(p149,130););
printStats();
void* p185 = last_address;
PRINT_POINTER(scalloc(204,239););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
DEBUG_PRINT(sfree(p146););
printStats();
DEBUG_PRINT(sfree(p145););
printStats();
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(srealloc(p147,23););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(27,118););
printStats();
void* p188 = last_address;
PRINT_POINTER(srealloc(p179,209););
printStats();
void* p189 = last_address;
PRINT_POINTER(srealloc(p111,62););
printStats();
void* p190 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(smalloc(239););
printStats();
void* p191 = last_address;
PRINT_POINTER(srealloc(p108,122););
printStats();
void* p192 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p193 = last_address;
PRINT_POINTER(smalloc(82););
printStats();
void* p194 = last_address;
DEBUG_PRINT(sfree(p182););
printStats();
PRINT_POINTER(srealloc(p97,98););
printStats();
void* p195 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p196 = last_address;
}
