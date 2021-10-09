#include "aux_macro.h"
#include "../malloc_3.cpp"
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
                        PRINT_POINTER(smalloc(122););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(scalloc(116,155););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(smalloc(78););
printStats();
void* p2 = last_address;
PRINT_POINTER(smalloc(223););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(smalloc(197););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p3,107););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p4,35););
printStats();
void* p6 = last_address;
PRINT_POINTER(scalloc(59,153););
printStats();
void* p7 = last_address;
PRINT_POINTER(scalloc(38,79););
printStats();
void* p8 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(srealloc(p7,91););
printStats();
void* p9 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(smalloc(202););
printStats();
void* p10 = last_address;
PRINT_POINTER(scalloc(73,210););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p6,202););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(211););
printStats();
void* p13 = last_address;
PRINT_POINTER(smalloc(190););
printStats();
void* p14 = last_address;
PRINT_POINTER(scalloc(30,206););
printStats();
void* p15 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p17 = last_address;
PRINT_POINTER(scalloc(218,15););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(116););
printStats();
void* p19 = last_address;
PRINT_POINTER(srealloc(p12,55););
printStats();
void* p20 = last_address;
PRINT_POINTER(srealloc(p17,132););
printStats();
void* p21 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(scalloc(32,107););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(240,108););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(134,57););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(96,125););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(139););
printStats();
void* p26 = last_address;
PRINT_POINTER(scalloc(31,200););
printStats();
void* p27 = last_address;
PRINT_POINTER(scalloc(244,237););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(105,195););
printStats();
void* p29 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(167););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p20,107););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(174););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p34 = last_address;
PRINT_POINTER(scalloc(82,172););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(36,238););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p32,53););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(168,155););
printStats();
void* p38 = last_address;
PRINT_POINTER(scalloc(17,235););
printStats();
void* p39 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p40 = last_address;
PRINT_POINTER(scalloc(137,208););
printStats();
void* p41 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(scalloc(103,196););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
DEBUG_PRINT(sfree(p16););
printStats();
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(srealloc(p26,62););
printStats();
void* p43 = last_address;
PRINT_POINTER(smalloc(248););
printStats();
void* p44 = last_address;
PRINT_POINTER(scalloc(112,27););
printStats();
void* p45 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p46 = last_address;
PRINT_POINTER(srealloc(p19,84););
printStats();
void* p47 = last_address;
PRINT_POINTER(scalloc(15,153););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p37,70););
printStats();
void* p49 = last_address;
PRINT_POINTER(srealloc(p42,37););
printStats();
void* p50 = last_address;
PRINT_POINTER(smalloc(248););
printStats();
void* p51 = last_address;
PRINT_POINTER(srealloc(p51,69););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p21,47););
printStats();
void* p53 = last_address;
PRINT_POINTER(srealloc(p41,103););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(246););
printStats();
void* p55 = last_address;
PRINT_POINTER(smalloc(34););
printStats();
void* p56 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(srealloc(p31,75););
printStats();
void* p57 = last_address;
PRINT_POINTER(srealloc(p34,59););
printStats();
void* p58 = last_address;
PRINT_POINTER(srealloc(p10,18););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p30,41););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(219););
printStats();
void* p61 = last_address;
PRINT_POINTER(scalloc(139,134););
printStats();
void* p62 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p11,39););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
DEBUG_PRINT(sfree(p53););
printStats();
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(smalloc(88););
printStats();
void* p65 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(srealloc(p52,154););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(107););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p60,188););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(smalloc(210););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(scalloc(191,40););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p45,241););
printStats();
void* p71 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(srealloc(p38,174););
printStats();
void* p72 = last_address;
PRINT_POINTER(srealloc(p33,223););
printStats();
void* p73 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(srealloc(p54,65););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(31););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p48););
printStats();
PRINT_POINTER(srealloc(p66,8););
printStats();
void* p76 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(smalloc(201););
printStats();
void* p77 = last_address;
PRINT_POINTER(scalloc(45,157););
printStats();
void* p78 = last_address;
PRINT_POINTER(srealloc(p76,228););
printStats();
void* p79 = last_address;
PRINT_POINTER(srealloc(p36,187););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p81 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(116););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(scalloc(0,241););
printStats();
void* p84 = last_address;
PRINT_POINTER(srealloc(p81,126););
printStats();
void* p85 = last_address;
PRINT_POINTER(smalloc(117););
printStats();
void* p86 = last_address;
PRINT_POINTER(srealloc(p69,95););
printStats();
void* p87 = last_address;
PRINT_POINTER(srealloc(p85,137););
printStats();
void* p88 = last_address;
PRINT_POINTER(srealloc(p50,223););
printStats();
void* p89 = last_address;
PRINT_POINTER(scalloc(26,66););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p56););
printStats();
PRINT_POINTER(scalloc(199,36););
printStats();
void* p92 = last_address;
PRINT_POINTER(srealloc(p24,246););
printStats();
void* p93 = last_address;
PRINT_POINTER(scalloc(9,184););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(smalloc(29););
printStats();
void* p95 = last_address;
PRINT_POINTER(scalloc(93,169););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p29,91););
printStats();
void* p97 = last_address;
PRINT_POINTER(scalloc(52,140););
printStats();
void* p98 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(smalloc(190););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(143););
printStats();
void* p100 = last_address;
PRINT_POINTER(scalloc(174,227););
printStats();
void* p101 = last_address;
PRINT_POINTER(srealloc(p25,172););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(23););
printStats();
void* p103 = last_address;
PRINT_POINTER(scalloc(115,99););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p58,85););
printStats();
void* p105 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(114););
printStats();
void* p106 = last_address;
PRINT_POINTER(smalloc(147););
printStats();
void* p107 = last_address;
PRINT_POINTER(smalloc(107););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p59,112););
printStats();
void* p109 = last_address;
PRINT_POINTER(srealloc(p40,177););
printStats();
void* p110 = last_address;
DEBUG_PRINT(sfree(p92););
printStats();
PRINT_POINTER(scalloc(78,237););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(smalloc(242););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(scalloc(17,69););
printStats();
void* p113 = last_address;
PRINT_POINTER(scalloc(35,178););
printStats();
void* p114 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
DEBUG_PRINT(sfree(p96););
printStats();
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(srealloc(p95,110););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(232,9););
printStats();
void* p116 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
PRINT_POINTER(srealloc(p100,130););
printStats();
void* p117 = last_address;
PRINT_POINTER(smalloc(195););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p47););
printStats();
PRINT_POINTER(srealloc(p83,165););
printStats();
void* p119 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(scalloc(121,185););
printStats();
void* p120 = last_address;
PRINT_POINTER(srealloc(p113,28););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p90,157););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(49,23););
printStats();
void* p123 = last_address;
PRINT_POINTER(smalloc(23););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(srealloc(p87,187););
printStats();
void* p125 = last_address;
PRINT_POINTER(smalloc(47););
printStats();
void* p126 = last_address;
PRINT_POINTER(srealloc(p99,201););
printStats();
void* p127 = last_address;
PRINT_POINTER(srealloc(p67,133););
printStats();
void* p128 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p129 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p131 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(smalloc(212););
printStats();
void* p132 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(scalloc(147,50););
printStats();
void* p133 = last_address;
PRINT_POINTER(scalloc(106,1););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p63,90););
printStats();
void* p135 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p136 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(smalloc(233););
printStats();
void* p137 = last_address;
DEBUG_PRINT(sfree(p122););
printStats();
PRINT_POINTER(srealloc(p97,195););
printStats();
void* p138 = last_address;
PRINT_POINTER(scalloc(105,248););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(92,220););
printStats();
void* p140 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
PRINT_POINTER(srealloc(p124,233););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(206,248););
printStats();
void* p142 = last_address;
PRINT_POINTER(scalloc(95,30););
printStats();
void* p143 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p144 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p145 = last_address;
PRINT_POINTER(smalloc(225););
printStats();
void* p146 = last_address;
PRINT_POINTER(scalloc(200,225););
printStats();
void* p147 = last_address;
PRINT_POINTER(srealloc(p71,228););
printStats();
void* p148 = last_address;
DEBUG_PRINT(sfree(p147););
printStats();
PRINT_POINTER(smalloc(45););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p86,195););
printStats();
void* p150 = last_address;
PRINT_POINTER(scalloc(9,159););
printStats();
void* p151 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(scalloc(125,80););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p115););
printStats();
PRINT_POINTER(smalloc(174););
printStats();
void* p153 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
DEBUG_PRINT(sfree(p126););
printStats();
PRINT_POINTER(srealloc(p94,128););
printStats();
void* p154 = last_address;
PRINT_POINTER(scalloc(129,175););
printStats();
void* p155 = last_address;
PRINT_POINTER(srealloc(p120,90););
printStats();
void* p156 = last_address;
PRINT_POINTER(srealloc(p154,160););
printStats();
void* p157 = last_address;
PRINT_POINTER(srealloc(p140,75););
printStats();
void* p158 = last_address;
PRINT_POINTER(smalloc(204););
printStats();
void* p159 = last_address;
PRINT_POINTER(scalloc(236,21););
printStats();
void* p160 = last_address;
PRINT_POINTER(scalloc(8,196););
printStats();
void* p161 = last_address;
DEBUG_PRINT(sfree(p138););
printStats();
PRINT_POINTER(srealloc(p106,94););
printStats();
void* p162 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(scalloc(89,23););
printStats();
void* p163 = last_address;
PRINT_POINTER(scalloc(123,235););
printStats();
void* p164 = last_address;
PRINT_POINTER(smalloc(223););
printStats();
void* p165 = last_address;
PRINT_POINTER(scalloc(183,112););
printStats();
void* p166 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p167 = last_address;
PRINT_POINTER(srealloc(p134,215););
printStats();
void* p168 = last_address;
PRINT_POINTER(srealloc(p108,30););
printStats();
void* p169 = last_address;
DEBUG_PRINT(sfree(p163););
printStats();
PRINT_POINTER(scalloc(152,191););
printStats();
void* p170 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p171 = last_address;
PRINT_POINTER(scalloc(183,163););
printStats();
void* p172 = last_address;
DEBUG_PRINT(sfree(p125););
printStats();
PRINT_POINTER(smalloc(151););
printStats();
void* p173 = last_address;
PRINT_POINTER(srealloc(p123,149););
printStats();
void* p174 = last_address;
PRINT_POINTER(srealloc(p105,51););
printStats();
void* p175 = last_address;
PRINT_POINTER(scalloc(42,230););
printStats();
void* p176 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p177 = last_address;
PRINT_POINTER(srealloc(p119,147););
printStats();
void* p178 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p176););
printStats();
PRINT_POINTER(smalloc(63););
printStats();
void* p180 = last_address;
PRINT_POINTER(smalloc(234););
printStats();
void* p181 = last_address;
DEBUG_PRINT(sfree(p165););
printStats();
PRINT_POINTER(scalloc(94,196););
printStats();
void* p182 = last_address;
PRINT_POINTER(scalloc(83,59););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(85,59););
printStats();
void* p184 = last_address;
PRINT_POINTER(srealloc(p178,66););
printStats();
void* p185 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
PRINT_POINTER(scalloc(17,191););
printStats();
void* p186 = last_address;
PRINT_POINTER(srealloc(p184,26););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(32,182););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(77););
printStats();
void* p189 = last_address;
PRINT_POINTER(scalloc(222,247););
printStats();
void* p190 = last_address;
PRINT_POINTER(scalloc(239,135););
printStats();
void* p191 = last_address;
PRINT_POINTER(srealloc(p139,212););
printStats();
void* p192 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p193 = last_address;
PRINT_POINTER(scalloc(217,209););
printStats();
void* p194 = last_address;
PRINT_POINTER(srealloc(p186,217););
printStats();
void* p195 = last_address;
PRINT_POINTER(scalloc(189,171););
printStats();
void* p196 = last_address;
DEBUG_PRINT(sfree(p133););
printStats();
PRINT_POINTER(scalloc(146,240););
printStats();
void* p197 = last_address;
PRINT_POINTER(scalloc(109,244););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
PRINT_POINTER(smalloc(161););
printStats();
void* p199 = last_address;
PRINT_POINTER(srealloc(p102,211););
printStats();
void* p200 = last_address;
PRINT_POINTER(scalloc(83,246););
printStats();
void* p201 = last_address;
PRINT_POINTER(scalloc(6,73););
printStats();
void* p202 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(smalloc(119););
printStats();
void* p203 = last_address;
PRINT_POINTER(srealloc(p196,197););
printStats();
void* p204 = last_address;
PRINT_POINTER(scalloc(54,131););
printStats();
void* p205 = last_address;
PRINT_POINTER(srealloc(p203,107););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(42,110););
printStats();
void* p207 = last_address;
PRINT_POINTER(scalloc(98,118););
printStats();
void* p208 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p209 = last_address;
PRINT_POINTER(scalloc(123,5););
printStats();
void* p210 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p211,83););
printStats();
void* p212 = last_address;
PRINT_POINTER(srealloc(p201,31););
printStats();
void* p213 = last_address;
PRINT_POINTER(srealloc(p153,248););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(88););
printStats();
void* p215 = last_address;
PRINT_POINTER(smalloc(77););
printStats();
void* p216 = last_address;
PRINT_POINTER(srealloc(p181,176););
printStats();
void* p217 = last_address;
PRINT_POINTER(srealloc(p200,116););
printStats();
void* p218 = last_address;
PRINT_POINTER(srealloc(p131,186););
printStats();
void* p219 = last_address;
PRINT_POINTER(srealloc(p212,233););
printStats();
void* p220 = last_address;
PRINT_POINTER(srealloc(p199,230););
printStats();
void* p221 = last_address;
PRINT_POINTER(srealloc(p156,147););
printStats();
void* p222 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(srealloc(p185,151););
printStats();
void* p224 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p225 = last_address;
PRINT_POINTER(scalloc(234,21););
printStats();
void* p226 = last_address;
PRINT_POINTER(scalloc(21,220););
printStats();
void* p227 = last_address;
PRINT_POINTER(scalloc(230,206););
printStats();
void* p228 = last_address;
PRINT_POINTER(srealloc(p177,141););
printStats();
void* p229 = last_address;
PRINT_POINTER(srealloc(p224,79););
printStats();
void* p230 = last_address;
PRINT_POINTER(scalloc(155,73););
printStats();
void* p231 = last_address;
PRINT_POINTER(scalloc(203,181););
printStats();
void* p232 = last_address;
PRINT_POINTER(srealloc(p192,69););
printStats();
void* p233 = last_address;
DEBUG_PRINT(sfree(p162););
printStats();
PRINT_POINTER(scalloc(213,192););
printStats();
void* p234 = last_address;
PRINT_POINTER(smalloc(48););
printStats();
void* p235 = last_address;
DEBUG_PRINT(sfree(p168););
printStats();
PRINT_POINTER(smalloc(76););
printStats();
void* p236 = last_address;
PRINT_POINTER(srealloc(p219,160););
printStats();
void* p237 = last_address;
PRINT_POINTER(srealloc(p230,116););
printStats();
void* p238 = last_address;
PRINT_POINTER(srealloc(p187,232););
printStats();
void* p239 = last_address;
PRINT_POINTER(srealloc(p204,97););
printStats();
void* p240 = last_address;
PRINT_POINTER(scalloc(118,127););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(85););
printStats();
void* p242 = last_address;
PRINT_POINTER(scalloc(104,77););
printStats();
void* p243 = last_address;
DEBUG_PRINT(sfree(p149););
printStats();
DEBUG_PRINT(sfree(p167););
printStats();
PRINT_POINTER(srealloc(p180,149););
printStats();
void* p244 = last_address;
PRINT_POINTER(smalloc(205););
printStats();
void* p245 = last_address;
PRINT_POINTER(scalloc(172,31););
printStats();
void* p246 = last_address;
PRINT_POINTER(scalloc(158,146););
printStats();
void* p247 = last_address;
PRINT_POINTER(srealloc(p245,197););
printStats();
void* p248 = last_address;
PRINT_POINTER(scalloc(86,246););
printStats();
void* p249 = last_address;
PRINT_POINTER(smalloc(177););
printStats();
void* p250 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(smalloc(30););
printStats();
void* p251 = last_address;
PRINT_POINTER(scalloc(64,240););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
PRINT_POINTER(smalloc(223););
printStats();
void* p253 = last_address;
}
