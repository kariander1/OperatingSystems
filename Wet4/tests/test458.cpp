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
                        PRINT_POINTER(smalloc(191););
printStats();
void* p0 = last_address;
PRINT_POINTER(scalloc(201,184););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(srealloc(p0,177););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(76,214););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p2,172););
printStats();
void* p4 = last_address;
PRINT_POINTER(smalloc(36););
printStats();
void* p5 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p6 = last_address;
PRINT_POINTER(scalloc(141,193););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(123););
printStats();
void* p8 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p9 = last_address;
PRINT_POINTER(srealloc(p4,246););
printStats();
void* p10 = last_address;
PRINT_POINTER(scalloc(65,211););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p10,180););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p13 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(scalloc(40,36););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p15 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(smalloc(2););
printStats();
void* p16 = last_address;
PRINT_POINTER(scalloc(161,125););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(scalloc(126,227););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(73););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(110,4););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(67,190););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(144,10););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(160,246););
printStats();
void* p23 = last_address;
PRINT_POINTER(smalloc(104););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p18,131););
printStats();
void* p25 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(srealloc(p12,244););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(scalloc(191,245););
printStats();
void* p27 = last_address;
PRINT_POINTER(srealloc(p26,189););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(157,64););
printStats();
void* p29 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(srealloc(p19,127););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p31 = last_address;
PRINT_POINTER(scalloc(109,241););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(1););
printStats();
void* p33 = last_address;
PRINT_POINTER(srealloc(p27,100););
printStats();
void* p34 = last_address;
PRINT_POINTER(scalloc(166,196););
printStats();
void* p35 = last_address;
PRINT_POINTER(srealloc(p34,89););
printStats();
void* p36 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p37 = last_address;
PRINT_POINTER(srealloc(p22,28););
printStats();
void* p38 = last_address;
PRINT_POINTER(srealloc(p33,176););
printStats();
void* p39 = last_address;
PRINT_POINTER(srealloc(p17,248););
printStats();
void* p40 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(191,36););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(4););
printStats();
void* p43 = last_address;
PRINT_POINTER(srealloc(p39,93););
printStats();
void* p44 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
DEBUG_PRINT(sfree(p35););
printStats();
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(srealloc(p31,51););
printStats();
void* p45 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(srealloc(p44,207););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p47 = last_address;
PRINT_POINTER(smalloc(98););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p30,165););
printStats();
void* p49 = last_address;
PRINT_POINTER(srealloc(p42,25););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(smalloc(159););
printStats();
void* p51 = last_address;
PRINT_POINTER(smalloc(145););
printStats();
void* p52 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(smalloc(245););
printStats();
void* p53 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p54 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(scalloc(83,49););
printStats();
void* p55 = last_address;
PRINT_POINTER(smalloc(126););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(100,72););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
PRINT_POINTER(srealloc(p24,248););
printStats();
void* p58 = last_address;
PRINT_POINTER(srealloc(p56,102););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p20,80););
printStats();
void* p60 = last_address;
PRINT_POINTER(srealloc(p51,13););
printStats();
void* p61 = last_address;
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(scalloc(155,52););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(158,229););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p52,39););
printStats();
void* p64 = last_address;
PRINT_POINTER(scalloc(28,86););
printStats();
void* p65 = last_address;
PRINT_POINTER(smalloc(107););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(94););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p59,236););
printStats();
void* p68 = last_address;
PRINT_POINTER(srealloc(p7,239););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p29,56););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p41,32););
printStats();
void* p71 = last_address;
PRINT_POINTER(smalloc(48););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p73 = last_address;
PRINT_POINTER(scalloc(64,216););
printStats();
void* p74 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
DEBUG_PRINT(sfree(p65););
printStats();
DEBUG_PRINT(sfree(p72););
printStats();
PRINT_POINTER(smalloc(247););
printStats();
void* p75 = last_address;
PRINT_POINTER(srealloc(p58,142););
printStats();
void* p76 = last_address;
PRINT_POINTER(smalloc(70););
printStats();
void* p77 = last_address;
DEBUG_PRINT(sfree(p76););
printStats();
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(smalloc(61););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(16););
printStats();
void* p79 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p80 = last_address;
PRINT_POINTER(srealloc(p61,109););
printStats();
void* p81 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p80););
printStats();
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(scalloc(69,187););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p83););
printStats();
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(srealloc(p69,119););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p48););
printStats();
PRINT_POINTER(smalloc(61););
printStats();
void* p85 = last_address;
PRINT_POINTER(scalloc(30,36););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(114,211););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(180););
printStats();
void* p88 = last_address;
PRINT_POINTER(srealloc(p49,111););
printStats();
void* p89 = last_address;
PRINT_POINTER(srealloc(p11,149););
printStats();
void* p90 = last_address;
PRINT_POINTER(srealloc(p75,63););
printStats();
void* p91 = last_address;
PRINT_POINTER(srealloc(p70,166););
printStats();
void* p92 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(smalloc(109););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p73,164););
printStats();
void* p96 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p92,191););
printStats();
void* p98 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(smalloc(125););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(6););
printStats();
void* p100 = last_address;
PRINT_POINTER(scalloc(190,80););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(236,71););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(10););
printStats();
void* p103 = last_address;
PRINT_POINTER(smalloc(68););
printStats();
void* p104 = last_address;
DEBUG_PRINT(sfree(p88););
printStats();
PRINT_POINTER(smalloc(106););
printStats();
void* p105 = last_address;
PRINT_POINTER(smalloc(166););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(4,173););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p47,56););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p63,92););
printStats();
void* p109 = last_address;
PRINT_POINTER(scalloc(192,213););
printStats();
void* p110 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
PRINT_POINTER(srealloc(p25,105););
printStats();
void* p111 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p112 = last_address;
PRINT_POINTER(scalloc(39,128););
printStats();
void* p113 = last_address;
PRINT_POINTER(scalloc(215,106););
printStats();
void* p114 = last_address;
PRINT_POINTER(srealloc(p71,96););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(156,168););
printStats();
void* p116 = last_address;
PRINT_POINTER(scalloc(180,35););
printStats();
void* p117 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p103););
printStats();
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(smalloc(20););
printStats();
void* p119 = last_address;
PRINT_POINTER(smalloc(160););
printStats();
void* p120 = last_address;
PRINT_POINTER(srealloc(p62,57););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p107,184););
printStats();
void* p122 = last_address;
PRINT_POINTER(smalloc(219););
printStats();
void* p123 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(srealloc(p117,130););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(srealloc(p123,55););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(srealloc(p90,32););
printStats();
void* p126 = last_address;
PRINT_POINTER(srealloc(p93,128););
printStats();
void* p127 = last_address;
PRINT_POINTER(smalloc(191););
printStats();
void* p128 = last_address;
PRINT_POINTER(scalloc(98,41););
printStats();
void* p129 = last_address;
PRINT_POINTER(smalloc(114););
printStats();
void* p130 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(scalloc(74,164););
printStats();
void* p131 = last_address;
PRINT_POINTER(srealloc(p118,118););
printStats();
void* p132 = last_address;
DEBUG_PRINT(sfree(p102););
printStats();
DEBUG_PRINT(sfree(p113););
printStats();
PRINT_POINTER(scalloc(142,244););
printStats();
void* p133 = last_address;
PRINT_POINTER(scalloc(63,36););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p87););
printStats();
PRINT_POINTER(scalloc(3,36););
printStats();
void* p135 = last_address;
PRINT_POINTER(smalloc(140););
printStats();
void* p136 = last_address;
PRINT_POINTER(smalloc(38););
printStats();
void* p137 = last_address;
PRINT_POINTER(srealloc(p99,145););
printStats();
void* p138 = last_address;
PRINT_POINTER(srealloc(p115,108););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(167,120););
printStats();
void* p140 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(scalloc(126,15););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(206,220););
printStats();
void* p142 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p141););
printStats();
PRINT_POINTER(smalloc(70););
printStats();
void* p144 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p145 = last_address;
PRINT_POINTER(smalloc(193););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p147 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p148 = last_address;
PRINT_POINTER(srealloc(p110,140););
printStats();
void* p149 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p150 = last_address;
PRINT_POINTER(smalloc(241););
printStats();
void* p151 = last_address;
PRINT_POINTER(scalloc(49,244););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(srealloc(p148,207););
printStats();
void* p153 = last_address;
PRINT_POINTER(scalloc(59,9););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p155 = last_address;
DEBUG_PRINT(sfree(p126););
printStats();
PRINT_POINTER(smalloc(52););
printStats();
void* p156 = last_address;
PRINT_POINTER(scalloc(25,134););
printStats();
void* p157 = last_address;
PRINT_POINTER(scalloc(81,164););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(208,70););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p132,219););
printStats();
void* p160 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(smalloc(152););
printStats();
void* p161 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(smalloc(182););
printStats();
void* p162 = last_address;
PRINT_POINTER(srealloc(p77,103););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p130););
printStats();
PRINT_POINTER(smalloc(162););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(smalloc(52););
printStats();
void* p165 = last_address;
PRINT_POINTER(scalloc(222,247););
printStats();
void* p166 = last_address;
PRINT_POINTER(srealloc(p146,26););
printStats();
void* p167 = last_address;
PRINT_POINTER(srealloc(p149,16););
printStats();
void* p168 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p169 = last_address;
PRINT_POINTER(scalloc(238,119););
printStats();
void* p170 = last_address;
PRINT_POINTER(scalloc(214,144););
printStats();
void* p171 = last_address;
PRINT_POINTER(scalloc(44,172););
printStats();
void* p172 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p173 = last_address;
PRINT_POINTER(srealloc(p125,105););
printStats();
void* p174 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
PRINT_POINTER(smalloc(36););
printStats();
void* p175 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p176 = last_address;
PRINT_POINTER(scalloc(94,166););
printStats();
void* p177 = last_address;
PRINT_POINTER(srealloc(p176,47););
printStats();
void* p178 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(srealloc(p109,74););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
PRINT_POINTER(srealloc(p163,115););
printStats();
void* p180 = last_address;
PRINT_POINTER(scalloc(42,63););
printStats();
void* p181 = last_address;
PRINT_POINTER(smalloc(146););
printStats();
void* p182 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p183 = last_address;
PRINT_POINTER(smalloc(47););
printStats();
void* p184 = last_address;
PRINT_POINTER(scalloc(145,64););
printStats();
void* p185 = last_address;
DEBUG_PRINT(sfree(p155););
printStats();
PRINT_POINTER(scalloc(142,220););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
DEBUG_PRINT(sfree(p116););
printStats();
DEBUG_PRINT(sfree(p129););
printStats();
PRINT_POINTER(srealloc(p159,32););
printStats();
void* p187 = last_address;
PRINT_POINTER(srealloc(p131,228););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p189 = last_address;
PRINT_POINTER(srealloc(p164,99););
printStats();
void* p190 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p191 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
DEBUG_PRINT(sfree(p79););
printStats();
DEBUG_PRINT(sfree(p167););
printStats();
PRINT_POINTER(scalloc(163,152););
printStats();
void* p192 = last_address;
PRINT_POINTER(srealloc(p136,249););
printStats();
void* p193 = last_address;
DEBUG_PRINT(sfree(p174););
printStats();
PRINT_POINTER(smalloc(160););
printStats();
void* p194 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p195 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p196 = last_address;
DEBUG_PRINT(sfree(p162););
printStats();
PRINT_POINTER(scalloc(114,152););
printStats();
void* p197 = last_address;
PRINT_POINTER(smalloc(21););
printStats();
void* p198 = last_address;
PRINT_POINTER(smalloc(68););
printStats();
void* p199 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(scalloc(108,115););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p184,28););
printStats();
void* p201 = last_address;
PRINT_POINTER(srealloc(p84,156););
printStats();
void* p202 = last_address;
PRINT_POINTER(scalloc(182,14););
printStats();
void* p203 = last_address;
DEBUG_PRINT(sfree(p185););
printStats();
PRINT_POINTER(srealloc(p156,46););
printStats();
void* p204 = last_address;
PRINT_POINTER(smalloc(102););
printStats();
void* p205 = last_address;
PRINT_POINTER(srealloc(p193,56););
printStats();
void* p206 = last_address;
PRINT_POINTER(srealloc(p101,77););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p133,120););
printStats();
void* p208 = last_address;
PRINT_POINTER(srealloc(p172,97););
printStats();
void* p209 = last_address;
PRINT_POINTER(scalloc(173,15););
printStats();
void* p210 = last_address;
DEBUG_PRINT(sfree(p173););
printStats();
PRINT_POINTER(scalloc(12,82););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p165,176););
printStats();
void* p212 = last_address;
PRINT_POINTER(srealloc(p209,14););
printStats();
void* p213 = last_address;
PRINT_POINTER(srealloc(p154,177););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p215 = last_address;
DEBUG_PRINT(sfree(p210););
printStats();
DEBUG_PRINT(sfree(p138););
printStats();
DEBUG_PRINT(sfree(p108););
printStats();
PRINT_POINTER(srealloc(p134,91););
printStats();
void* p216 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p217 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p218 = last_address;
PRINT_POINTER(smalloc(25););
printStats();
void* p219 = last_address;
PRINT_POINTER(scalloc(90,229););
printStats();
void* p220 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(smalloc(34););
printStats();
void* p221 = last_address;
DEBUG_PRINT(sfree(p212););
printStats();
PRINT_POINTER(smalloc(32););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p201,27););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
PRINT_POINTER(srealloc(p171,24););
printStats();
void* p224 = last_address;
PRINT_POINTER(srealloc(p177,129););
printStats();
void* p225 = last_address;
PRINT_POINTER(scalloc(73,182););
printStats();
void* p226 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
PRINT_POINTER(srealloc(p139,179););
printStats();
void* p227 = last_address;
PRINT_POINTER(scalloc(81,124););
printStats();
void* p228 = last_address;
DEBUG_PRINT(sfree(p203););
printStats();
PRINT_POINTER(smalloc(130););
printStats();
void* p229 = last_address;
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(srealloc(p211,42););
printStats();
void* p230 = last_address;
DEBUG_PRINT(sfree(p143););
printStats();
PRINT_POINTER(srealloc(p189,236););
printStats();
void* p231 = last_address;
PRINT_POINTER(smalloc(146););
printStats();
void* p232 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(srealloc(p151,93););
printStats();
void* p233 = last_address;
PRINT_POINTER(srealloc(p221,248););
printStats();
void* p234 = last_address;
PRINT_POINTER(srealloc(p85,39););
printStats();
void* p235 = last_address;
DEBUG_PRINT(sfree(p183););
printStats();
PRINT_POINTER(scalloc(40,170););
printStats();
void* p236 = last_address;
DEBUG_PRINT(sfree(p122););
printStats();
DEBUG_PRINT(sfree(p180););
printStats();
PRINT_POINTER(srealloc(p216,170););
printStats();
void* p237 = last_address;
PRINT_POINTER(scalloc(138,227););
printStats();
void* p238 = last_address;
PRINT_POINTER(scalloc(133,30););
printStats();
void* p239 = last_address;
PRINT_POINTER(srealloc(p137,227););
printStats();
void* p240 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(scalloc(123,190););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p242 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p243 = last_address;
PRINT_POINTER(smalloc(225););
printStats();
void* p244 = last_address;
DEBUG_PRINT(sfree(p233););
printStats();
PRINT_POINTER(srealloc(p175,169););
printStats();
void* p245 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
DEBUG_PRINT(sfree(p181););
printStats();
PRINT_POINTER(smalloc(195););
printStats();
void* p246 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(srealloc(p150,182););
printStats();
void* p247 = last_address;
PRINT_POINTER(scalloc(84,73););
printStats();
void* p248 = last_address;
DEBUG_PRINT(sfree(p246););
printStats();
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(smalloc(88););
printStats();
void* p249 = last_address;
PRINT_POINTER(smalloc(166););
printStats();
void* p250 = last_address;
DEBUG_PRINT(sfree(p231););
printStats();
PRINT_POINTER(smalloc(172););
printStats();
void* p251 = last_address;
PRINT_POINTER(srealloc(p197,207););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p215););
printStats();
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(srealloc(p228,140););
printStats();
void* p253 = last_address;
DEBUG_PRINT(sfree(p241););
printStats();
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(smalloc(86););
printStats();
void* p254 = last_address;
DEBUG_PRINT(sfree(p213););
printStats();
PRINT_POINTER(scalloc(165,221););
printStats();
void* p255 = last_address;
PRINT_POINTER(srealloc(p179,232););
printStats();
void* p256 = last_address;
DEBUG_PRINT(sfree(p223););
printStats();
PRINT_POINTER(srealloc(p254,154););
printStats();
void* p257 = last_address;
PRINT_POINTER(smalloc(160););
printStats();
void* p258 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p259 = last_address;
PRINT_POINTER(scalloc(65,132););
printStats();
void* p260 = last_address;
PRINT_POINTER(scalloc(173,156););
printStats();
void* p261 = last_address;
DEBUG_PRINT(sfree(p250););
printStats();
PRINT_POINTER(srealloc(p224,77););
printStats();
void* p262 = last_address;
PRINT_POINTER(smalloc(8););
printStats();
void* p263 = last_address;
PRINT_POINTER(scalloc(212,56););
printStats();
void* p264 = last_address;
PRINT_POINTER(srealloc(p238,90););
printStats();
void* p265 = last_address;
PRINT_POINTER(scalloc(99,200););
printStats();
void* p266 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
DEBUG_PRINT(sfree(p258););
printStats();
DEBUG_PRINT(sfree(p196););
printStats();
PRINT_POINTER(srealloc(p40,137););
printStats();
void* p267 = last_address;
DEBUG_PRINT(sfree(p245););
printStats();
PRINT_POINTER(srealloc(p220,224););
printStats();
void* p268 = last_address;
PRINT_POINTER(srealloc(p105,64););
printStats();
void* p269 = last_address;
DEBUG_PRINT(sfree(p226););
printStats();
DEBUG_PRINT(sfree(p157););
printStats();
DEBUG_PRINT(sfree(p269););
printStats();
DEBUG_PRINT(sfree(p263););
printStats();
PRINT_POINTER(smalloc(182););
printStats();
void* p270 = last_address;
PRINT_POINTER(srealloc(p262,111););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(152,223););
printStats();
void* p272 = last_address;
PRINT_POINTER(srealloc(p192,96););
printStats();
void* p273 = last_address;
PRINT_POINTER(scalloc(202,164););
printStats();
void* p274 = last_address;
PRINT_POINTER(scalloc(55,179););
printStats();
void* p275 = last_address;
PRINT_POINTER(smalloc(96););
printStats();
void* p276 = last_address;
PRINT_POINTER(scalloc(119,210););
printStats();
void* p277 = last_address;
DEBUG_PRINT(sfree(p240););
printStats();
PRINT_POINTER(srealloc(p217,107););
printStats();
void* p278 = last_address;
DEBUG_PRINT(sfree(p239););
printStats();
PRINT_POINTER(srealloc(p274,37););
printStats();
void* p279 = last_address;
PRINT_POINTER(smalloc(239););
printStats();
void* p280 = last_address;
PRINT_POINTER(srealloc(p247,226););
printStats();
void* p281 = last_address;
PRINT_POINTER(smalloc(25););
printStats();
void* p282 = last_address;
PRINT_POINTER(srealloc(p152,165););
printStats();
void* p283 = last_address;
DEBUG_PRINT(sfree(p236););
printStats();
PRINT_POINTER(smalloc(180););
printStats();
void* p284 = last_address;
PRINT_POINTER(scalloc(68,38););
printStats();
void* p285 = last_address;
PRINT_POINTER(srealloc(p222,240););
printStats();
void* p286 = last_address;
PRINT_POINTER(srealloc(p207,111););
printStats();
void* p287 = last_address;
PRINT_POINTER(scalloc(194,27););
printStats();
void* p288 = last_address;
PRINT_POINTER(scalloc(248,212););
printStats();
void* p289 = last_address;
PRINT_POINTER(srealloc(p195,226););
printStats();
void* p290 = last_address;
PRINT_POINTER(scalloc(58,61););
printStats();
void* p291 = last_address;
DEBUG_PRINT(sfree(p286););
printStats();
PRINT_POINTER(srealloc(p200,155););
printStats();
void* p292 = last_address;
DEBUG_PRINT(sfree(p270););
printStats();
PRINT_POINTER(smalloc(204););
printStats();
void* p293 = last_address;
DEBUG_PRINT(sfree(p219););
printStats();
PRINT_POINTER(scalloc(227,1););
printStats();
void* p294 = last_address;
PRINT_POINTER(smalloc(190););
printStats();
void* p295 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p296 = last_address;
DEBUG_PRINT(sfree(p252););
printStats();
PRINT_POINTER(srealloc(p244,84););
printStats();
void* p297 = last_address;
DEBUG_PRINT(sfree(p280););
printStats();
DEBUG_PRINT(sfree(p120););
printStats();
DEBUG_PRINT(sfree(p235););
printStats();
PRINT_POINTER(scalloc(20,41););
printStats();
void* p298 = last_address;
DEBUG_PRINT(sfree(p242););
printStats();
PRINT_POINTER(srealloc(p206,104););
printStats();
void* p299 = last_address;
PRINT_POINTER(scalloc(208,7););
printStats();
void* p300 = last_address;
DEBUG_PRINT(sfree(p168););
printStats();
PRINT_POINTER(srealloc(p257,97););
printStats();
void* p301 = last_address;
PRINT_POINTER(srealloc(p227,246););
printStats();
void* p302 = last_address;
PRINT_POINTER(srealloc(p297,66););
printStats();
void* p303 = last_address;
PRINT_POINTER(srealloc(p237,171););
printStats();
void* p304 = last_address;
PRINT_POINTER(srealloc(p214,147););
printStats();
void* p305 = last_address;
DEBUG_PRINT(sfree(p260););
printStats();
DEBUG_PRINT(sfree(p291););
printStats();
DEBUG_PRINT(sfree(p287););
printStats();
PRINT_POINTER(scalloc(192,55););
printStats();
void* p306 = last_address;
PRINT_POINTER(scalloc(108,102););
printStats();
void* p307 = last_address;
DEBUG_PRINT(sfree(p225););
printStats();
DEBUG_PRINT(sfree(p229););
printStats();
DEBUG_PRINT(sfree(p281););
printStats();
PRINT_POINTER(srealloc(p299,198););
printStats();
void* p308 = last_address;
PRINT_POINTER(scalloc(25,114););
printStats();
void* p309 = last_address;
PRINT_POINTER(smalloc(25););
printStats();
void* p310 = last_address;
PRINT_POINTER(srealloc(p119,89););
printStats();
void* p311 = last_address;
PRINT_POINTER(srealloc(p199,236););
printStats();
void* p312 = last_address;
PRINT_POINTER(scalloc(188,140););
printStats();
void* p313 = last_address;
PRINT_POINTER(srealloc(p64,51););
printStats();
void* p314 = last_address;
DEBUG_PRINT(sfree(p249););
printStats();
PRINT_POINTER(smalloc(193););
printStats();
void* p315 = last_address;
PRINT_POINTER(smalloc(64););
printStats();
void* p316 = last_address;
DEBUG_PRINT(sfree(p277););
printStats();
DEBUG_PRINT(sfree(p278););
printStats();
PRINT_POINTER(scalloc(93,121););
printStats();
void* p317 = last_address;
DEBUG_PRINT(sfree(p315););
printStats();
PRINT_POINTER(scalloc(199,93););
printStats();
void* p318 = last_address;
PRINT_POINTER(scalloc(85,174););
printStats();
void* p319 = last_address;
DEBUG_PRINT(sfree(p202););
printStats();
PRINT_POINTER(scalloc(102,120););
printStats();
void* p320 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p321 = last_address;
PRINT_POINTER(smalloc(14););
printStats();
void* p322 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(scalloc(184,197););
printStats();
void* p323 = last_address;
PRINT_POINTER(smalloc(175););
printStats();
void* p324 = last_address;
PRINT_POINTER(smalloc(79););
printStats();
void* p325 = last_address;
DEBUG_PRINT(sfree(p279););
printStats();
PRINT_POINTER(srealloc(p194,233););
printStats();
void* p326 = last_address;
PRINT_POINTER(srealloc(p325,63););
printStats();
void* p327 = last_address;
PRINT_POINTER(scalloc(245,197););
printStats();
void* p328 = last_address;
DEBUG_PRINT(sfree(p190););
printStats();
PRINT_POINTER(scalloc(172,127););
printStats();
void* p329 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p330 = last_address;
DEBUG_PRINT(sfree(p261););
printStats();
PRINT_POINTER(srealloc(p170,110););
printStats();
void* p331 = last_address;
PRINT_POINTER(scalloc(204,202););
printStats();
void* p332 = last_address;
PRINT_POINTER(scalloc(14,187););
printStats();
void* p333 = last_address;
PRINT_POINTER(smalloc(192););
printStats();
void* p334 = last_address;
DEBUG_PRINT(sfree(p314););
printStats();
PRINT_POINTER(smalloc(142););
printStats();
void* p335 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
PRINT_POINTER(srealloc(p264,186););
printStats();
void* p336 = last_address;
PRINT_POINTER(scalloc(56,211););
printStats();
void* p337 = last_address;
PRINT_POINTER(srealloc(p268,25););
printStats();
void* p338 = last_address;
PRINT_POINTER(srealloc(p311,156););
printStats();
void* p339 = last_address;
PRINT_POINTER(smalloc(185););
printStats();
void* p340 = last_address;
PRINT_POINTER(smalloc(218););
printStats();
void* p341 = last_address;
PRINT_POINTER(srealloc(p306,182););
printStats();
void* p342 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p343 = last_address;
PRINT_POINTER(scalloc(31,33););
printStats();
void* p344 = last_address;
DEBUG_PRINT(sfree(p294););
printStats();
PRINT_POINTER(smalloc(52););
printStats();
void* p345 = last_address;
PRINT_POINTER(smalloc(44););
printStats();
void* p346 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p347 = last_address;
DEBUG_PRINT(sfree(p273););
printStats();
PRINT_POINTER(scalloc(195,20););
printStats();
void* p348 = last_address;
DEBUG_PRINT(sfree(p292););
printStats();
PRINT_POINTER(scalloc(233,12););
printStats();
void* p349 = last_address;
PRINT_POINTER(srealloc(p234,190););
printStats();
void* p350 = last_address;
PRINT_POINTER(scalloc(130,114););
printStats();
void* p351 = last_address;
PRINT_POINTER(srealloc(p341,31););
printStats();
void* p352 = last_address;
PRINT_POINTER(scalloc(209,182););
printStats();
void* p353 = last_address;
PRINT_POINTER(smalloc(57););
printStats();
void* p354 = last_address;
PRINT_POINTER(smalloc(152););
printStats();
void* p355 = last_address;
PRINT_POINTER(scalloc(180,186););
printStats();
void* p356 = last_address;
PRINT_POINTER(scalloc(83,231););
printStats();
void* p357 = last_address;
PRINT_POINTER(scalloc(239,186););
printStats();
void* p358 = last_address;
DEBUG_PRINT(sfree(p275););
printStats();
PRINT_POINTER(scalloc(197,177););
printStats();
void* p359 = last_address;
PRINT_POINTER(smalloc(116););
printStats();
void* p360 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p361 = last_address;
PRINT_POINTER(srealloc(p352,93););
printStats();
void* p362 = last_address;
PRINT_POINTER(scalloc(246,160););
printStats();
void* p363 = last_address;
PRINT_POINTER(srealloc(p204,12););
printStats();
void* p364 = last_address;
PRINT_POINTER(srealloc(p356,37););
printStats();
void* p365 = last_address;
PRINT_POINTER(scalloc(46,145););
printStats();
void* p366 = last_address;
PRINT_POINTER(scalloc(111,184););
printStats();
void* p367 = last_address;
PRINT_POINTER(srealloc(p327,179););
printStats();
void* p368 = last_address;
DEBUG_PRINT(sfree(p342););
printStats();
}