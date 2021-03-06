#include "aux_macro.h"
#include "../malloc_2.cpp"
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
                        PRINT_POINTER(smalloc(242););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(smalloc(58););
printStats();
void* p1 = last_address;
PRINT_POINTER(smalloc(101););
printStats();
void* p2 = last_address;
PRINT_POINTER(smalloc(147););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p3,42););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(smalloc(115););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p1,121););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
DEBUG_PRINT(sfree(p2););
printStats();
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(scalloc(206,63););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p7,138););
printStats();
void* p8 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(216););
printStats();
void* p10 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(srealloc(p11,66););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(196,86););
printStats();
void* p14 = last_address;
PRINT_POINTER(srealloc(p13,169););
printStats();
void* p15 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(scalloc(91,104););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(155););
printStats();
void* p17 = last_address;
PRINT_POINTER(scalloc(245,80););
printStats();
void* p18 = last_address;
PRINT_POINTER(scalloc(38,106););
printStats();
void* p19 = last_address;
PRINT_POINTER(srealloc(p19,113););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p17););
printStats();
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(smalloc(108););
printStats();
void* p21 = last_address;
PRINT_POINTER(smalloc(166););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(scalloc(118,142););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(157,5););
printStats();
void* p24 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p25 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(srealloc(p24,28););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p16,202););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(247,240););
printStats();
void* p29 = last_address;
PRINT_POINTER(srealloc(p27,158););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(97,166););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p26,69););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(155););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p34 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(srealloc(p28,131););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(131););
printStats();
void* p36 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(smalloc(118););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(80,120););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(3););
printStats();
void* p39 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(srealloc(p29,127););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(srealloc(p10,69););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(135,148););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(srealloc(p40,96););
printStats();
void* p43 = last_address;
PRINT_POINTER(scalloc(205,185););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(116););
printStats();
void* p45 = last_address;
PRINT_POINTER(smalloc(188););
printStats();
void* p46 = last_address;
PRINT_POINTER(srealloc(p21,38););
printStats();
void* p47 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p48 = last_address;
PRINT_POINTER(scalloc(132,90););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(234,163););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p48););
printStats();
PRINT_POINTER(scalloc(132,210););
printStats();
void* p51 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(smalloc(100););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(122,145););
printStats();
void* p53 = last_address;
PRINT_POINTER(scalloc(178,144););
printStats();
void* p54 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(smalloc(233););
printStats();
void* p55 = last_address;
PRINT_POINTER(srealloc(p53,96););
printStats();
void* p56 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
PRINT_POINTER(srealloc(p56,214););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(smalloc(237););
printStats();
void* p59 = last_address;
PRINT_POINTER(smalloc(151););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p61 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(smalloc(180););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(23,144););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p44,151););
printStats();
void* p64 = last_address;
PRINT_POINTER(srealloc(p58,66););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p45,191););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p55,83););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p50,36););
printStats();
void* p68 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p69 = last_address;
PRINT_POINTER(scalloc(40,95););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p37,26););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(215,244););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(248););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p65,166););
printStats();
void* p74 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(scalloc(164,75););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(68,27););
printStats();
void* p76 = last_address;
DEBUG_PRINT(sfree(p63););
printStats();
PRINT_POINTER(srealloc(p57,249););
printStats();
void* p77 = last_address;
PRINT_POINTER(scalloc(161,14););
printStats();
void* p78 = last_address;
PRINT_POINTER(srealloc(p72,191););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(smalloc(178););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(smalloc(27););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p77,36););
printStats();
void* p82 = last_address;
PRINT_POINTER(srealloc(p76,24););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(scalloc(109,195););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(smalloc(95););
printStats();
void* p85 = last_address;
PRINT_POINTER(smalloc(206););
printStats();
void* p86 = last_address;
PRINT_POINTER(smalloc(172););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p89 = last_address;
PRINT_POINTER(srealloc(p47,205););
printStats();
void* p90 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(srealloc(p52,77););
printStats();
void* p91 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p92 = last_address;
PRINT_POINTER(smalloc(138););
printStats();
void* p93 = last_address;
PRINT_POINTER(scalloc(192,0););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(smalloc(139););
printStats();
void* p95 = last_address;
PRINT_POINTER(scalloc(155,188););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(srealloc(p92,249););
printStats();
void* p97 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(smalloc(125););
printStats();
void* p98 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(scalloc(237,65););
printStats();
void* p99 = last_address;
PRINT_POINTER(srealloc(p70,26););
printStats();
void* p100 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p101 = last_address;
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(srealloc(p31,119););
printStats();
void* p102 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(scalloc(14,126););
printStats();
void* p103 = last_address;
DEBUG_PRINT(sfree(p71););
printStats();
DEBUG_PRINT(sfree(p64););
printStats();
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(srealloc(p86,92););
printStats();
void* p104 = last_address;
PRINT_POINTER(scalloc(47,229););
printStats();
void* p105 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(51,162););
printStats();
void* p107 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(srealloc(p73,43););
printStats();
void* p108 = last_address;
PRINT_POINTER(scalloc(12,40););
printStats();
void* p109 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p110 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(smalloc(169););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p38,135););
printStats();
void* p112 = last_address;
PRINT_POINTER(srealloc(p100,183););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(242););
printStats();
void* p114 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(srealloc(p97,217););
printStats();
void* p116 = last_address;
PRINT_POINTER(srealloc(p98,177););
printStats();
void* p117 = last_address;
PRINT_POINTER(scalloc(43,90););
printStats();
void* p118 = last_address;
PRINT_POINTER(smalloc(126););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(190,200););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
DEBUG_PRINT(sfree(p119););
printStats();
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(scalloc(181,154););
printStats();
void* p121 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(scalloc(193,117););
printStats();
void* p122 = last_address;
PRINT_POINTER(srealloc(p118,243););
printStats();
void* p123 = last_address;
PRINT_POINTER(srealloc(p93,110););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p105););
printStats();
PRINT_POINTER(scalloc(128,162););
printStats();
void* p125 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p126 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(scalloc(143,59););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(smalloc(44););
printStats();
void* p128 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p129 = last_address;
PRINT_POINTER(scalloc(249,224););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(248););
printStats();
void* p131 = last_address;
PRINT_POINTER(smalloc(233););
printStats();
void* p132 = last_address;
DEBUG_PRINT(sfree(p115););
printStats();
PRINT_POINTER(scalloc(56,215););
printStats();
void* p133 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(smalloc(61););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(scalloc(199,188););
printStats();
void* p135 = last_address;
PRINT_POINTER(scalloc(102,60););
printStats();
void* p136 = last_address;
PRINT_POINTER(scalloc(89,170););
printStats();
void* p137 = last_address;
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(srealloc(p129,198););
printStats();
void* p138 = last_address;
PRINT_POINTER(srealloc(p116,4););
printStats();
void* p139 = last_address;
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(scalloc(129,156););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(211,37););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p102,121););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(smalloc(187););
printStats();
void* p144 = last_address;
DEBUG_PRINT(sfree(p99););
printStats();
PRINT_POINTER(smalloc(0););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p130,190););
printStats();
void* p146 = last_address;
PRINT_POINTER(srealloc(p109,242););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(26,170););
printStats();
void* p148 = last_address;
PRINT_POINTER(scalloc(71,101););
printStats();
void* p149 = last_address;
PRINT_POINTER(scalloc(64,151););
printStats();
void* p150 = last_address;
PRINT_POINTER(srealloc(p143,172););
printStats();
void* p151 = last_address;
PRINT_POINTER(srealloc(p110,40););
printStats();
void* p152 = last_address;
PRINT_POINTER(srealloc(p78,138););
printStats();
void* p153 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p155 = last_address;
PRINT_POINTER(scalloc(10,233););
printStats();
void* p156 = last_address;
PRINT_POINTER(scalloc(113,3););
printStats();
void* p157 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p158 = last_address;
PRINT_POINTER(srealloc(p153,71););
printStats();
void* p159 = last_address;
PRINT_POINTER(smalloc(37););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p161 = last_address;
PRINT_POINTER(srealloc(p127,223););
printStats();
void* p162 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p163 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
PRINT_POINTER(srealloc(p151,209););
printStats();
void* p165 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p166 = last_address;
PRINT_POINTER(smalloc(144););
printStats();
void* p167 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p168 = last_address;
PRINT_POINTER(scalloc(202,159););
printStats();
void* p169 = last_address;
PRINT_POINTER(scalloc(244,238););
printStats();
void* p170 = last_address;
PRINT_POINTER(scalloc(17,156););
printStats();
void* p171 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p172 = last_address;
PRINT_POINTER(scalloc(137,41););
printStats();
void* p173 = last_address;
PRINT_POINTER(smalloc(100););
printStats();
void* p174 = last_address;
PRINT_POINTER(scalloc(32,40););
printStats();
void* p175 = last_address;
PRINT_POINTER(smalloc(166););
printStats();
void* p176 = last_address;
PRINT_POINTER(srealloc(p149,31););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(srealloc(p108,42););
printStats();
void* p178 = last_address;
PRINT_POINTER(scalloc(73,75););
printStats();
void* p179 = last_address;
PRINT_POINTER(smalloc(88););
printStats();
void* p180 = last_address;
PRINT_POINTER(srealloc(p133,131););
printStats();
void* p181 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p182 = last_address;
DEBUG_PRINT(sfree(p176););
printStats();
PRINT_POINTER(scalloc(119,170););
printStats();
void* p183 = last_address;
DEBUG_PRINT(sfree(p167););
printStats();
PRINT_POINTER(smalloc(149););
printStats();
void* p184 = last_address;
DEBUG_PRINT(sfree(p156););
printStats();
PRINT_POINTER(smalloc(19););
printStats();
void* p185 = last_address;
PRINT_POINTER(scalloc(32,30););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p120););
printStats();
PRINT_POINTER(srealloc(p168,63););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(28,225););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p189 = last_address;
PRINT_POINTER(srealloc(p126,48););
printStats();
void* p190 = last_address;
PRINT_POINTER(srealloc(p166,219););
printStats();
void* p191 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p192 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p193 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p194 = last_address;
DEBUG_PRINT(sfree(p112););
printStats();
DEBUG_PRINT(sfree(p172););
printStats();
PRINT_POINTER(smalloc(86););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p123,54););
printStats();
void* p196 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(219););
printStats();
void* p197 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p198 = last_address;
PRINT_POINTER(scalloc(47,168););
printStats();
void* p199 = last_address;
DEBUG_PRINT(sfree(p162););
printStats();
PRINT_POINTER(scalloc(238,79););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p189,23););
printStats();
void* p201 = last_address;
PRINT_POINTER(smalloc(183););
printStats();
void* p202 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p203 = last_address;
PRINT_POINTER(smalloc(1););
printStats();
void* p204 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(scalloc(87,186););
printStats();
void* p205 = last_address;
PRINT_POINTER(srealloc(p122,191););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(248,127););
printStats();
void* p207 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
DEBUG_PRINT(sfree(p179););
printStats();
PRINT_POINTER(srealloc(p198,165););
printStats();
void* p208 = last_address;
PRINT_POINTER(scalloc(137,85););
printStats();
void* p209 = last_address;
PRINT_POINTER(srealloc(p206,238););
printStats();
void* p210 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
DEBUG_PRINT(sfree(p210););
printStats();
PRINT_POINTER(smalloc(204););
printStats();
void* p211 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p212 = last_address;
PRINT_POINTER(srealloc(p66,81););
printStats();
void* p213 = last_address;
PRINT_POINTER(scalloc(202,164););
printStats();
void* p214 = last_address;
PRINT_POINTER(srealloc(p183,124););
printStats();
void* p215 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p216 = last_address;
PRINT_POINTER(scalloc(110,139););
printStats();
void* p217 = last_address;
PRINT_POINTER(scalloc(218,116););
printStats();
void* p218 = last_address;
PRINT_POINTER(srealloc(p207,96););
printStats();
void* p219 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
PRINT_POINTER(srealloc(p138,150););
printStats();
void* p220 = last_address;
PRINT_POINTER(scalloc(126,65););
printStats();
void* p221 = last_address;
PRINT_POINTER(srealloc(p131,143););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p208,170););
printStats();
void* p223 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p224 = last_address;
PRINT_POINTER(srealloc(p148,186););
printStats();
void* p225 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p226 = last_address;
DEBUG_PRINT(sfree(p84););
printStats();
PRINT_POINTER(scalloc(118,171););
printStats();
void* p227 = last_address;
PRINT_POINTER(srealloc(p150,57););
printStats();
void* p228 = last_address;
DEBUG_PRINT(sfree(p184););
printStats();
PRINT_POINTER(srealloc(p225,194););
printStats();
void* p229 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(scalloc(23,178););
printStats();
void* p230 = last_address;
PRINT_POINTER(scalloc(38,119););
printStats();
void* p231 = last_address;
DEBUG_PRINT(sfree(p157););
printStats();
PRINT_POINTER(scalloc(166,111););
printStats();
void* p232 = last_address;
DEBUG_PRINT(sfree(p182););
printStats();
PRINT_POINTER(smalloc(59););
printStats();
void* p233 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p234 = last_address;
PRINT_POINTER(srealloc(p180,5););
printStats();
void* p235 = last_address;
PRINT_POINTER(srealloc(p159,189););
printStats();
void* p236 = last_address;
DEBUG_PRINT(sfree(p223););
printStats();
PRINT_POINTER(smalloc(7););
printStats();
void* p237 = last_address;
PRINT_POINTER(srealloc(p203,245););
printStats();
void* p238 = last_address;
PRINT_POINTER(srealloc(p87,185););
printStats();
void* p239 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p240 = last_address;
PRINT_POINTER(srealloc(p200,72););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p242 = last_address;
DEBUG_PRINT(sfree(p218););
printStats();
DEBUG_PRINT(sfree(p227););
printStats();
PRINT_POINTER(smalloc(187););
printStats();
void* p243 = last_address;
DEBUG_PRINT(sfree(p145););
printStats();
PRINT_POINTER(srealloc(p174,183););
printStats();
void* p244 = last_address;
PRINT_POINTER(scalloc(78,229););
printStats();
void* p245 = last_address;
PRINT_POINTER(scalloc(2,83););
printStats();
void* p246 = last_address;
DEBUG_PRINT(sfree(p209););
printStats();
DEBUG_PRINT(sfree(p188););
printStats();
PRINT_POINTER(smalloc(169););
printStats();
void* p247 = last_address;
PRINT_POINTER(scalloc(22,98););
printStats();
void* p248 = last_address;
PRINT_POINTER(smalloc(118););
printStats();
void* p249 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p250 = last_address;
PRINT_POINTER(srealloc(p205,150););
printStats();
void* p251 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p191););
printStats();
DEBUG_PRINT(sfree(p222););
printStats();
PRINT_POINTER(smalloc(104););
printStats();
void* p253 = last_address;
DEBUG_PRINT(sfree(p252););
printStats();
PRINT_POINTER(scalloc(62,70););
printStats();
void* p254 = last_address;
PRINT_POINTER(srealloc(p238,141););
printStats();
void* p255 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
DEBUG_PRINT(sfree(p226););
printStats();
PRINT_POINTER(smalloc(0););
printStats();
void* p256 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(scalloc(180,211););
printStats();
void* p257 = last_address;
PRINT_POINTER(srealloc(p173,32););
printStats();
void* p258 = last_address;
PRINT_POINTER(smalloc(205););
printStats();
void* p259 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p260 = last_address;
PRINT_POINTER(scalloc(211,145););
printStats();
void* p261 = last_address;
PRINT_POINTER(srealloc(p190,31););
printStats();
void* p262 = last_address;
PRINT_POINTER(srealloc(p213,159););
printStats();
void* p263 = last_address;
PRINT_POINTER(smalloc(103););
printStats();
void* p264 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p265 = last_address;
PRINT_POINTER(srealloc(p147,227););
printStats();
void* p266 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p267 = last_address;
DEBUG_PRINT(sfree(p257););
printStats();
PRINT_POINTER(scalloc(2,79););
printStats();
void* p268 = last_address;
DEBUG_PRINT(sfree(p267););
printStats();
PRINT_POINTER(smalloc(207););
printStats();
void* p269 = last_address;
PRINT_POINTER(scalloc(23,169););
printStats();
void* p270 = last_address;
DEBUG_PRINT(sfree(p202););
printStats();
PRINT_POINTER(smalloc(146););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(244,245););
printStats();
void* p272 = last_address;
PRINT_POINTER(scalloc(205,167););
printStats();
void* p273 = last_address;
PRINT_POINTER(smalloc(149););
printStats();
void* p274 = last_address;
PRINT_POINTER(scalloc(136,159););
printStats();
void* p275 = last_address;
PRINT_POINTER(smalloc(228););
printStats();
void* p276 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p277 = last_address;
PRINT_POINTER(scalloc(232,141););
printStats();
void* p278 = last_address;
PRINT_POINTER(smalloc(70););
printStats();
void* p279 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p280 = last_address;
PRINT_POINTER(srealloc(p255,147););
printStats();
void* p281 = last_address;
PRINT_POINTER(smalloc(74););
printStats();
void* p282 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p283 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
DEBUG_PRINT(sfree(p139););
printStats();
PRINT_POINTER(smalloc(57););
printStats();
void* p284 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p285 = last_address;
DEBUG_PRINT(sfree(p247););
printStats();
}
