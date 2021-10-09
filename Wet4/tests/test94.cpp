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
                        PRINT_POINTER(scalloc(156,216););
printStats();
void* p0 = last_address;
PRINT_POINTER(srealloc(p0,205););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(smalloc(40););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(9,150););
printStats();
void* p3 = last_address;
PRINT_POINTER(scalloc(212,194););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(smalloc(157););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p4,76););
printStats();
void* p6 = last_address;
PRINT_POINTER(scalloc(43,218););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p3,149););
printStats();
void* p8 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(scalloc(156,65););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p8,118););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(211););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(smalloc(191););
printStats();
void* p13 = last_address;
PRINT_POINTER(srealloc(p9,141););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(160););
printStats();
void* p15 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(srealloc(p10,80););
printStats();
void* p16 = last_address;
PRINT_POINTER(scalloc(98,138););
printStats();
void* p17 = last_address;
PRINT_POINTER(smalloc(223););
printStats();
void* p18 = last_address;
PRINT_POINTER(srealloc(p13,226););
printStats();
void* p19 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(scalloc(14,9););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(scalloc(165,38););
printStats();
void* p21 = last_address;
PRINT_POINTER(srealloc(p20,111););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(smalloc(15););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p14,199););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p19,127););
printStats();
void* p25 = last_address;
PRINT_POINTER(srealloc(p16,122););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p26,24););
printStats();
void* p27 = last_address;
PRINT_POINTER(scalloc(144,95););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p28,170););
printStats();
void* p29 = last_address;
PRINT_POINTER(srealloc(p23,142););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(179,169););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(57););
printStats();
void* p32 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(scalloc(219,158););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(112,16););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(177););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(72,152););
printStats();
void* p36 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(144,88););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(144,38););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p39 = last_address;
PRINT_POINTER(smalloc(76););
printStats();
void* p40 = last_address;
PRINT_POINTER(srealloc(p33,95););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(29,105););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p43 = last_address;
PRINT_POINTER(srealloc(p38,153););
printStats();
void* p44 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
PRINT_POINTER(srealloc(p25,98););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p29,165););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(206););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(smalloc(209););
printStats();
void* p48 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(scalloc(135,13););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(scalloc(217,114););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(242,70););
printStats();
void* p51 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(smalloc(176););
printStats();
void* p52 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p53 = last_address;
PRINT_POINTER(scalloc(205,207););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(srealloc(p53,4););
printStats();
void* p56 = last_address;
PRINT_POINTER(srealloc(p34,42););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(smalloc(85););
printStats();
void* p58 = last_address;
PRINT_POINTER(scalloc(219,165););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p44,9););
printStats();
void* p60 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(scalloc(203,77););
printStats();
void* p61 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(smalloc(33););
printStats();
void* p62 = last_address;
PRINT_POINTER(srealloc(p31,99););
printStats();
void* p63 = last_address;
PRINT_POINTER(scalloc(139,130););
printStats();
void* p64 = last_address;
PRINT_POINTER(srealloc(p62,167););
printStats();
void* p65 = last_address;
PRINT_POINTER(smalloc(118););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(70););
printStats();
void* p67 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p68 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p24,137););
printStats();
void* p70 = last_address;
DEBUG_PRINT(sfree(p56););
printStats();
PRINT_POINTER(srealloc(p47,195););
printStats();
void* p71 = last_address;
PRINT_POINTER(smalloc(101););
printStats();
void* p72 = last_address;
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(srealloc(p67,244););
printStats();
void* p73 = last_address;
DEBUG_PRINT(sfree(p58););
printStats();
PRINT_POINTER(srealloc(p73,99););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(167););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(smalloc(247););
printStats();
void* p76 = last_address;
PRINT_POINTER(scalloc(201,200););
printStats();
void* p77 = last_address;
PRINT_POINTER(srealloc(p60,74););
printStats();
void* p78 = last_address;
PRINT_POINTER(srealloc(p63,36););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p65););
printStats();
PRINT_POINTER(scalloc(66,150););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p45,144););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(scalloc(124,70););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(smalloc(193););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(scalloc(159,205););
printStats();
void* p85 = last_address;
PRINT_POINTER(scalloc(52,98););
printStats();
void* p86 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(scalloc(32,151););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(69););
printStats();
void* p89 = last_address;
PRINT_POINTER(scalloc(50,85););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p91 = last_address;
PRINT_POINTER(scalloc(51,227););
printStats();
void* p92 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(srealloc(p84,201););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(216););
printStats();
void* p94 = last_address;
PRINT_POINTER(srealloc(p51,139););
printStats();
void* p95 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
DEBUG_PRINT(sfree(p76););
printStats();
DEBUG_PRINT(sfree(p87););
printStats();
DEBUG_PRINT(sfree(p55););
printStats();
DEBUG_PRINT(sfree(p71););
printStats();
DEBUG_PRINT(sfree(p92););
printStats();
PRINT_POINTER(scalloc(210,170););
printStats();
void* p96 = last_address;
PRINT_POINTER(scalloc(210,143););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p95,143););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(154,142););
printStats();
void* p99 = last_address;
PRINT_POINTER(scalloc(22,114););
printStats();
void* p100 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(srealloc(p86,126););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(144,141););
printStats();
void* p102 = last_address;
PRINT_POINTER(srealloc(p85,243););
printStats();
void* p103 = last_address;
PRINT_POINTER(scalloc(165,38););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p83,210););
printStats();
void* p105 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
DEBUG_PRINT(sfree(p97););
printStats();
DEBUG_PRINT(sfree(p88););
printStats();
PRINT_POINTER(smalloc(73););
printStats();
void* p106 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p107 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(smalloc(178););
printStats();
void* p108 = last_address;
PRINT_POINTER(smalloc(37););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(scalloc(196,69););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
DEBUG_PRINT(sfree(p105););
printStats();
PRINT_POINTER(smalloc(211););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(smalloc(36););
printStats();
void* p113 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(srealloc(p90,68););
printStats();
void* p114 = last_address;
PRINT_POINTER(scalloc(68,148););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(scalloc(214,171););
printStats();
void* p116 = last_address;
PRINT_POINTER(scalloc(1,145););
printStats();
void* p117 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p118 = last_address;
PRINT_POINTER(srealloc(p111,39););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(244,149););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(30,69););
printStats();
void* p121 = last_address;
PRINT_POINTER(scalloc(242,181););
printStats();
void* p122 = last_address;
PRINT_POINTER(smalloc(151););
printStats();
void* p123 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(scalloc(76,68););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(smalloc(19););
printStats();
void* p125 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p126 = last_address;
PRINT_POINTER(smalloc(144););
printStats();
void* p127 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p128 = last_address;
PRINT_POINTER(scalloc(181,107););
printStats();
void* p129 = last_address;
PRINT_POINTER(srealloc(p120,22););
printStats();
void* p130 = last_address;
PRINT_POINTER(scalloc(246,94););
printStats();
void* p131 = last_address;
DEBUG_PRINT(sfree(p70););
printStats();
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(smalloc(195););
printStats();
void* p132 = last_address;
PRINT_POINTER(srealloc(p98,174););
printStats();
void* p133 = last_address;
PRINT_POINTER(srealloc(p131,29););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(scalloc(79,131););
printStats();
void* p135 = last_address;
PRINT_POINTER(scalloc(163,240););
printStats();
void* p136 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p137 = last_address;
PRINT_POINTER(smalloc(90););
printStats();
void* p138 = last_address;
PRINT_POINTER(srealloc(p134,191););
printStats();
void* p139 = last_address;
PRINT_POINTER(srealloc(p64,92););
printStats();
void* p140 = last_address;
PRINT_POINTER(srealloc(p116,144););
printStats();
void* p141 = last_address;
PRINT_POINTER(smalloc(109););
printStats();
void* p142 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p143 = last_address;
PRINT_POINTER(scalloc(237,74););
printStats();
void* p144 = last_address;
PRINT_POINTER(srealloc(p48,133););
printStats();
void* p145 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(scalloc(100,6););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(81););
printStats();
void* p147 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p148 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(scalloc(29,22););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p126,56););
printStats();
void* p150 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p151 = last_address;
PRINT_POINTER(smalloc(81););
printStats();
void* p152 = last_address;
PRINT_POINTER(smalloc(115););
printStats();
void* p153 = last_address;
PRINT_POINTER(srealloc(p150,65););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(108););
printStats();
void* p155 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p156 = last_address;
PRINT_POINTER(scalloc(98,24););
printStats();
void* p157 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(67,119););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p125,189););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(222););
printStats();
void* p161 = last_address;
PRINT_POINTER(srealloc(p137,201););
printStats();
void* p162 = last_address;
PRINT_POINTER(scalloc(19,62););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p148););
printStats();
PRINT_POINTER(scalloc(122,209););
printStats();
void* p164 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p165 = last_address;
PRINT_POINTER(srealloc(p156,117););
printStats();
void* p166 = last_address;
DEBUG_PRINT(sfree(p165););
printStats();
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(smalloc(112););
printStats();
void* p167 = last_address;
PRINT_POINTER(srealloc(p106,225););
printStats();
void* p168 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(smalloc(187););
printStats();
void* p169 = last_address;
PRINT_POINTER(scalloc(166,106););
printStats();
void* p170 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p171 = last_address;
DEBUG_PRINT(sfree(p171););
printStats();
PRINT_POINTER(smalloc(236););
printStats();
void* p172 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p173 = last_address;
PRINT_POINTER(scalloc(196,17););
printStats();
void* p174 = last_address;
DEBUG_PRINT(sfree(p119););
printStats();
PRINT_POINTER(smalloc(91););
printStats();
void* p175 = last_address;
PRINT_POINTER(srealloc(p138,1););
printStats();
void* p176 = last_address;
DEBUG_PRINT(sfree(p139););
printStats();
DEBUG_PRINT(sfree(p103););
printStats();
DEBUG_PRINT(sfree(p115););
printStats();
DEBUG_PRINT(sfree(p154););
printStats();
PRINT_POINTER(scalloc(25,224););
printStats();
void* p177 = last_address;
PRINT_POINTER(srealloc(p176,2););
printStats();
void* p178 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(smalloc(121););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(scalloc(204,228););
printStats();
void* p180 = last_address;
PRINT_POINTER(srealloc(p162,81););
printStats();
void* p181 = last_address;
PRINT_POINTER(scalloc(181,224););
printStats();
void* p182 = last_address;
DEBUG_PRINT(sfree(p155););
printStats();
PRINT_POINTER(srealloc(p170,185););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(56,140););
printStats();
void* p184 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p185 = last_address;
PRINT_POINTER(srealloc(p96,119););
printStats();
void* p186 = last_address;
PRINT_POINTER(srealloc(p184,71););
printStats();
void* p187 = last_address;
PRINT_POINTER(srealloc(p175,14););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p189 = last_address;
DEBUG_PRINT(sfree(p181););
printStats();
DEBUG_PRINT(sfree(p158););
printStats();
PRINT_POINTER(srealloc(p113,131););
printStats();
void* p190 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p191 = last_address;
PRINT_POINTER(scalloc(207,49););
printStats();
void* p192 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(scalloc(50,201););
printStats();
void* p193 = last_address;
PRINT_POINTER(smalloc(178););
printStats();
void* p194 = last_address;
PRINT_POINTER(srealloc(p186,6););
printStats();
void* p195 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
DEBUG_PRINT(sfree(p188););
printStats();
PRINT_POINTER(scalloc(237,104););
printStats();
void* p196 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p197 = last_address;
PRINT_POINTER(scalloc(161,12););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(smalloc(34););
printStats();
void* p199 = last_address;
PRINT_POINTER(srealloc(p145,159););
printStats();
void* p200 = last_address;
PRINT_POINTER(smalloc(188););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p182););
printStats();
PRINT_POINTER(smalloc(117););
printStats();
void* p202 = last_address;
PRINT_POINTER(smalloc(222););
printStats();
void* p203 = last_address;
PRINT_POINTER(srealloc(p143,121););
printStats();
void* p204 = last_address;
DEBUG_PRINT(sfree(p200););
printStats();
DEBUG_PRINT(sfree(p168););
printStats();
DEBUG_PRINT(sfree(p191););
printStats();
DEBUG_PRINT(sfree(p166););
printStats();
PRINT_POINTER(srealloc(p141,234););
printStats();
void* p205 = last_address;
PRINT_POINTER(srealloc(p164,175););
printStats();
void* p206 = last_address;
PRINT_POINTER(srealloc(p192,85););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p114,144););
printStats();
void* p208 = last_address;
DEBUG_PRINT(sfree(p157););
printStats();
PRINT_POINTER(scalloc(240,120););
printStats();
void* p209 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
PRINT_POINTER(scalloc(120,83););
printStats();
void* p210 = last_address;
PRINT_POINTER(smalloc(233););
printStats();
void* p211 = last_address;
DEBUG_PRINT(sfree(p122););
printStats();
PRINT_POINTER(smalloc(2););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
PRINT_POINTER(scalloc(71,66););
printStats();
void* p213 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p214 = last_address;
PRINT_POINTER(scalloc(24,62););
printStats();
void* p215 = last_address;
PRINT_POINTER(scalloc(5,108););
printStats();
void* p216 = last_address;
PRINT_POINTER(srealloc(p201,70););
printStats();
void* p217 = last_address;
PRINT_POINTER(scalloc(191,147););
printStats();
void* p218 = last_address;
PRINT_POINTER(srealloc(p183,229););
printStats();
void* p219 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p220 = last_address;
PRINT_POINTER(srealloc(p193,23););
printStats();
void* p221 = last_address;
PRINT_POINTER(scalloc(49,1););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p163,163););
printStats();
void* p223 = last_address;
PRINT_POINTER(srealloc(p218,18););
printStats();
void* p224 = last_address;
PRINT_POINTER(smalloc(216););
printStats();
void* p225 = last_address;
PRINT_POINTER(scalloc(191,197););
printStats();
void* p226 = last_address;
PRINT_POINTER(smalloc(215););
printStats();
void* p227 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p228 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p229 = last_address;
DEBUG_PRINT(sfree(p198););
printStats();
DEBUG_PRINT(sfree(p189););
printStats();
PRINT_POINTER(smalloc(142););
printStats();
void* p230 = last_address;
PRINT_POINTER(scalloc(116,233););
printStats();
void* p231 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p232 = last_address;
PRINT_POINTER(srealloc(p208,8););
printStats();
void* p233 = last_address;
PRINT_POINTER(scalloc(22,23););
printStats();
void* p234 = last_address;
PRINT_POINTER(srealloc(p228,92););
printStats();
void* p235 = last_address;
DEBUG_PRINT(sfree(p220););
printStats();
PRINT_POINTER(srealloc(p99,140););
printStats();
void* p236 = last_address;
PRINT_POINTER(scalloc(205,190););
printStats();
void* p237 = last_address;
PRINT_POINTER(scalloc(13,219););
printStats();
void* p238 = last_address;
PRINT_POINTER(scalloc(133,189););
printStats();
void* p239 = last_address;
PRINT_POINTER(scalloc(204,82););
printStats();
void* p240 = last_address;
PRINT_POINTER(srealloc(p161,205););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(26););
printStats();
void* p242 = last_address;
DEBUG_PRINT(sfree(p237););
printStats();
DEBUG_PRINT(sfree(p147););
printStats();
PRINT_POINTER(srealloc(p221,134););
printStats();
void* p243 = last_address;
PRINT_POINTER(smalloc(191););
printStats();
void* p244 = last_address;
PRINT_POINTER(srealloc(p219,186););
printStats();
void* p245 = last_address;
DEBUG_PRINT(sfree(p244););
printStats();
DEBUG_PRINT(sfree(p230););
printStats();
DEBUG_PRINT(sfree(p224););
printStats();
PRINT_POINTER(srealloc(p222,4););
printStats();
void* p246 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(smalloc(23););
printStats();
void* p247 = last_address;
DEBUG_PRINT(sfree(p217););
printStats();
PRINT_POINTER(scalloc(190,148););
printStats();
void* p248 = last_address;
PRINT_POINTER(scalloc(22,53););
printStats();
void* p249 = last_address;
DEBUG_PRINT(sfree(p234););
printStats();
PRINT_POINTER(srealloc(p167,82););
printStats();
void* p250 = last_address;
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(smalloc(110););
printStats();
void* p251 = last_address;
PRINT_POINTER(scalloc(89,144););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p235););
printStats();
PRINT_POINTER(scalloc(223,127););
printStats();
void* p253 = last_address;
PRINT_POINTER(srealloc(p209,19););
printStats();
void* p254 = last_address;
PRINT_POINTER(scalloc(21,25););
printStats();
void* p255 = last_address;
PRINT_POINTER(srealloc(p210,34););
printStats();
void* p256 = last_address;
PRINT_POINTER(srealloc(p78,25););
printStats();
void* p257 = last_address;
PRINT_POINTER(smalloc(43););
printStats();
void* p258 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p259 = last_address;
PRINT_POINTER(srealloc(p151,42););
printStats();
void* p260 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p261 = last_address;
PRINT_POINTER(srealloc(p258,163););
printStats();
void* p262 = last_address;
PRINT_POINTER(srealloc(p216,147););
printStats();
void* p263 = last_address;
DEBUG_PRINT(sfree(p229););
printStats();
PRINT_POINTER(scalloc(32,95););
printStats();
void* p264 = last_address;
PRINT_POINTER(srealloc(p172,7););
printStats();
void* p265 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
DEBUG_PRINT(sfree(p239););
printStats();
PRINT_POINTER(srealloc(p130,185););
printStats();
void* p266 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p267 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p268 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p269 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p270 = last_address;
PRINT_POINTER(scalloc(141,41););
printStats();
void* p271 = last_address;
PRINT_POINTER(srealloc(p271,238););
printStats();
void* p272 = last_address;
PRINT_POINTER(srealloc(p206,225););
printStats();
void* p273 = last_address;
PRINT_POINTER(srealloc(p225,180););
printStats();
void* p274 = last_address;
DEBUG_PRINT(sfree(p260););
printStats();
PRINT_POINTER(srealloc(p242,139););
printStats();
void* p275 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
PRINT_POINTER(scalloc(150,183););
printStats();
void* p276 = last_address;
PRINT_POINTER(srealloc(p213,18););
printStats();
void* p277 = last_address;
DEBUG_PRINT(sfree(p207););
printStats();
DEBUG_PRINT(sfree(p240););
printStats();
PRINT_POINTER(scalloc(95,119););
printStats();
void* p278 = last_address;
PRINT_POINTER(srealloc(p249,13););
printStats();
void* p279 = last_address;
PRINT_POINTER(srealloc(p174,206););
printStats();
void* p280 = last_address;
PRINT_POINTER(scalloc(18,55););
printStats();
void* p281 = last_address;
PRINT_POINTER(srealloc(p273,40););
printStats();
void* p282 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p283 = last_address;
DEBUG_PRINT(sfree(p203););
printStats();
PRINT_POINTER(scalloc(111,140););
printStats();
void* p284 = last_address;
PRINT_POINTER(smalloc(241););
printStats();
void* p285 = last_address;
DEBUG_PRINT(sfree(p204););
printStats();
PRINT_POINTER(srealloc(p102,177););
printStats();
void* p286 = last_address;
PRINT_POINTER(srealloc(p179,133););
printStats();
void* p287 = last_address;
PRINT_POINTER(srealloc(p275,127););
printStats();
void* p288 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p289 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p290 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
PRINT_POINTER(scalloc(183,184););
printStats();
void* p291 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p292 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p293 = last_address;
PRINT_POINTER(scalloc(66,172););
printStats();
void* p294 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(scalloc(32,207););
printStats();
void* p295 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p296 = last_address;
PRINT_POINTER(srealloc(p211,132););
printStats();
void* p297 = last_address;
PRINT_POINTER(srealloc(p250,44););
printStats();
void* p298 = last_address;
PRINT_POINTER(smalloc(135););
printStats();
void* p299 = last_address;
PRINT_POINTER(scalloc(186,96););
printStats();
void* p300 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p301 = last_address;
PRINT_POINTER(scalloc(134,144););
printStats();
void* p302 = last_address;
PRINT_POINTER(scalloc(6,207););
printStats();
void* p303 = last_address;
PRINT_POINTER(scalloc(223,223););
printStats();
void* p304 = last_address;
PRINT_POINTER(scalloc(170,162););
printStats();
void* p305 = last_address;
PRINT_POINTER(scalloc(238,59););
printStats();
void* p306 = last_address;
PRINT_POINTER(scalloc(79,178););
printStats();
void* p307 = last_address;
PRINT_POINTER(srealloc(p303,131););
printStats();
void* p308 = last_address;
PRINT_POINTER(scalloc(241,61););
printStats();
void* p309 = last_address;
PRINT_POINTER(srealloc(p300,138););
printStats();
void* p310 = last_address;
PRINT_POINTER(srealloc(p261,144););
printStats();
void* p311 = last_address;
PRINT_POINTER(scalloc(113,86););
printStats();
void* p312 = last_address;
PRINT_POINTER(smalloc(88););
printStats();
void* p313 = last_address;
PRINT_POINTER(scalloc(121,249););
printStats();
void* p314 = last_address;
PRINT_POINTER(smalloc(0););
printStats();
void* p315 = last_address;
PRINT_POINTER(srealloc(p276,206););
printStats();
void* p316 = last_address;
DEBUG_PRINT(sfree(p301););
printStats();
DEBUG_PRINT(sfree(p133););
printStats();
PRINT_POINTER(smalloc(202););
printStats();
void* p317 = last_address;
PRINT_POINTER(smalloc(41););
printStats();
void* p318 = last_address;
PRINT_POINTER(smalloc(175););
printStats();
void* p319 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p320 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p321 = last_address;
PRINT_POINTER(scalloc(226,27););
printStats();
void* p322 = last_address;
PRINT_POINTER(scalloc(193,90););
printStats();
void* p323 = last_address;
PRINT_POINTER(scalloc(18,56););
printStats();
void* p324 = last_address;
PRINT_POINTER(scalloc(84,150););
printStats();
void* p325 = last_address;
DEBUG_PRINT(sfree(p324););
printStats();
PRINT_POINTER(scalloc(152,170););
printStats();
void* p326 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p327 = last_address;
PRINT_POINTER(scalloc(0,99););
printStats();
void* p328 = last_address;
PRINT_POINTER(srealloc(p312,82););
printStats();
void* p329 = last_address;
DEBUG_PRINT(sfree(p262););
printStats();
PRINT_POINTER(scalloc(59,187););
printStats();
void* p330 = last_address;
PRINT_POINTER(scalloc(119,85););
printStats();
void* p331 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
PRINT_POINTER(smalloc(248););
printStats();
void* p332 = last_address;
PRINT_POINTER(srealloc(p327,63););
printStats();
void* p333 = last_address;
PRINT_POINTER(srealloc(p320,156););
printStats();
void* p334 = last_address;
PRINT_POINTER(srealloc(p297,155););
printStats();
void* p335 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p336 = last_address;
DEBUG_PRINT(sfree(p257););
printStats();
PRINT_POINTER(smalloc(214););
printStats();
void* p337 = last_address;
PRINT_POINTER(srealloc(p274,141););
printStats();
void* p338 = last_address;
DEBUG_PRINT(sfree(p232););
printStats();
PRINT_POINTER(scalloc(236,223););
printStats();
void* p339 = last_address;
DEBUG_PRINT(sfree(p329););
printStats();
DEBUG_PRINT(sfree(p268););
printStats();
PRINT_POINTER(smalloc(214););
printStats();
void* p340 = last_address;
PRINT_POINTER(scalloc(234,206););
printStats();
void* p341 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p342 = last_address;
DEBUG_PRINT(sfree(p233););
printStats();
PRINT_POINTER(srealloc(p341,28););
printStats();
void* p343 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
PRINT_POINTER(smalloc(176););
printStats();
void* p344 = last_address;
DEBUG_PRINT(sfree(p254););
printStats();
PRINT_POINTER(srealloc(p319,182););
printStats();
void* p345 = last_address;
PRINT_POINTER(scalloc(190,206););
printStats();
void* p346 = last_address;
PRINT_POINTER(scalloc(55,204););
printStats();
void* p347 = last_address;
PRINT_POINTER(srealloc(p317,13););
printStats();
void* p348 = last_address;
PRINT_POINTER(scalloc(150,13););
printStats();
void* p349 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p350 = last_address;
DEBUG_PRINT(sfree(p255););
printStats();
PRINT_POINTER(smalloc(66););
printStats();
void* p351 = last_address;
PRINT_POINTER(srealloc(p328,17););
printStats();
void* p352 = last_address;
PRINT_POINTER(srealloc(p146,130););
printStats();
void* p353 = last_address;
PRINT_POINTER(scalloc(40,57););
printStats();
void* p354 = last_address;
PRINT_POINTER(smalloc(59););
printStats();
void* p355 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p356 = last_address;
PRINT_POINTER(scalloc(4,186););
printStats();
void* p357 = last_address;
PRINT_POINTER(srealloc(p180,108););
printStats();
void* p358 = last_address;
PRINT_POINTER(srealloc(p302,101););
printStats();
void* p359 = last_address;
DEBUG_PRINT(sfree(p212););
printStats();
PRINT_POINTER(smalloc(76););
printStats();
void* p360 = last_address;
PRINT_POINTER(scalloc(14,154););
printStats();
void* p361 = last_address;
PRINT_POINTER(srealloc(p246,86););
printStats();
void* p362 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(srealloc(p340,174););
printStats();
void* p363 = last_address;
PRINT_POINTER(scalloc(210,14););
printStats();
void* p364 = last_address;
PRINT_POINTER(srealloc(p308,135););
printStats();
void* p365 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p366 = last_address;
PRINT_POINTER(scalloc(9,101););
printStats();
void* p367 = last_address;
DEBUG_PRINT(sfree(p338););
printStats();
DEBUG_PRINT(sfree(p282););
printStats();
PRINT_POINTER(srealloc(p238,231););
printStats();
void* p368 = last_address;
DEBUG_PRINT(sfree(p272););
printStats();
DEBUG_PRINT(sfree(p199););
printStats();
PRINT_POINTER(scalloc(136,180););
printStats();
void* p369 = last_address;
DEBUG_PRINT(sfree(p357););
printStats();
PRINT_POINTER(smalloc(109););
printStats();
void* p370 = last_address;
PRINT_POINTER(scalloc(2,21););
printStats();
void* p371 = last_address;
DEBUG_PRINT(sfree(p283););
printStats();
PRINT_POINTER(smalloc(200););
printStats();
void* p372 = last_address;
PRINT_POINTER(srealloc(p350,68););
printStats();
void* p373 = last_address;
PRINT_POINTER(srealloc(p227,124););
printStats();
void* p374 = last_address;
PRINT_POINTER(smalloc(4););
printStats();
void* p375 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p376 = last_address;
PRINT_POINTER(scalloc(105,96););
printStats();
void* p377 = last_address;
PRINT_POINTER(scalloc(180,20););
printStats();
void* p378 = last_address;
DEBUG_PRINT(sfree(p294););
printStats();
DEBUG_PRINT(sfree(p226););
printStats();
}
