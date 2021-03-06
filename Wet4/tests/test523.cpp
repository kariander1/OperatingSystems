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
                        PRINT_POINTER(smalloc(242););
printStats();
void* p0 = last_address;
PRINT_POINTER(srealloc(p0,22););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(scalloc(155,104););
printStats();
void* p2 = last_address;
PRINT_POINTER(srealloc(p2,57););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(scalloc(162,95););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p4,93););
printStats();
void* p5 = last_address;
PRINT_POINTER(scalloc(14,30););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(scalloc(188,126););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(12,177););
printStats();
void* p9 = last_address;
PRINT_POINTER(scalloc(208,135););
printStats();
void* p10 = last_address;
PRINT_POINTER(srealloc(p9,205););
printStats();
void* p11 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(smalloc(169););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
DEBUG_PRINT(sfree(p10););
printStats();
PRINT_POINTER(smalloc(70););
printStats();
void* p13 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p14 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
DEBUG_PRINT(sfree(p14););
printStats();
DEBUG_PRINT(sfree(p11););
printStats();
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(srealloc(p8,77););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(19,63););
printStats();
void* p16 = last_address;
PRINT_POINTER(srealloc(p16,85););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p15,3););
printStats();
void* p18 = last_address;
PRINT_POINTER(srealloc(p18,176););
printStats();
void* p19 = last_address;
PRINT_POINTER(smalloc(73););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(59,215););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(207,144););
printStats();
void* p22 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(129,121););
printStats();
void* p24 = last_address;
DEBUG_PRINT(sfree(p22););
printStats();
DEBUG_PRINT(sfree(p24););
printStats();
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(24););
printStats();
void* p25 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(srealloc(p20,126););
printStats();
void* p26 = last_address;
PRINT_POINTER(scalloc(21,137););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(13,214););
printStats();
void* p29 = last_address;
PRINT_POINTER(srealloc(p26,133););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(3,60););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p17,21););
printStats();
void* p32 = last_address;
PRINT_POINTER(scalloc(201,184););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p34 = last_address;
PRINT_POINTER(srealloc(p31,62););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(205););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p32,58););
printStats();
void* p37 = last_address;
PRINT_POINTER(srealloc(p35,153););
printStats();
void* p38 = last_address;
PRINT_POINTER(scalloc(15,186););
printStats();
void* p39 = last_address;
PRINT_POINTER(smalloc(41););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(scalloc(157,61););
printStats();
void* p41 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p42 = last_address;
PRINT_POINTER(srealloc(p38,172););
printStats();
void* p43 = last_address;
PRINT_POINTER(scalloc(2,207););
printStats();
void* p44 = last_address;
PRINT_POINTER(scalloc(198,222););
printStats();
void* p45 = last_address;
PRINT_POINTER(scalloc(195,106););
printStats();
void* p46 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(srealloc(p28,106););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(srealloc(p41,44););
printStats();
void* p48 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p29););
printStats();
PRINT_POINTER(scalloc(92,114););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(153,125););
printStats();
void* p51 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p39,64););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(scalloc(43,89););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(115););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p45););
printStats();
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(srealloc(p54,23););
printStats();
void* p56 = last_address;
PRINT_POINTER(srealloc(p47,237););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(smalloc(102););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(smalloc(93););
printStats();
void* p59 = last_address;
PRINT_POINTER(scalloc(114,163););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p61 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(srealloc(p58,141););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(97,78););
printStats();
void* p63 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p64 = last_address;
PRINT_POINTER(smalloc(169););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p48,155););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p60,122););
printStats();
void* p67 = last_address;
PRINT_POINTER(scalloc(10,25););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(scalloc(158,40););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p25,125););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p67,170););
printStats();
void* p71 = last_address;
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(scalloc(152,202););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p62,76););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(215););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(srealloc(p75,185););
printStats();
void* p76 = last_address;
DEBUG_PRINT(sfree(p19););
printStats();
PRINT_POINTER(srealloc(p53,182););
printStats();
void* p77 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
PRINT_POINTER(smalloc(84););
printStats();
void* p78 = last_address;
PRINT_POINTER(scalloc(100,160););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(203,74););
printStats();
void* p80 = last_address;
PRINT_POINTER(srealloc(p64,204););
printStats();
void* p81 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(smalloc(186););
printStats();
void* p82 = last_address;
PRINT_POINTER(srealloc(p46,179););
printStats();
void* p83 = last_address;
PRINT_POINTER(scalloc(199,187););
printStats();
void* p84 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(srealloc(p68,149););
printStats();
void* p86 = last_address;
PRINT_POINTER(srealloc(p63,92););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p88 = last_address;
PRINT_POINTER(scalloc(144,117););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p88););
printStats();
DEBUG_PRINT(sfree(p65););
printStats();
PRINT_POINTER(scalloc(189,28););
printStats();
void* p90 = last_address;
PRINT_POINTER(scalloc(10,185););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(smalloc(107););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(148,60););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p94 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p95 = last_address;
PRINT_POINTER(scalloc(187,228););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(srealloc(p81,24););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p91,186););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(68,191););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p100 = last_address;
PRINT_POINTER(smalloc(76););
printStats();
void* p101 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(smalloc(182););
printStats();
void* p102 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
PRINT_POINTER(srealloc(p82,70););
printStats();
void* p103 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
DEBUG_PRINT(sfree(p102););
printStats();
PRINT_POINTER(smalloc(138););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p76,48););
printStats();
void* p105 = last_address;
PRINT_POINTER(smalloc(80););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(44,158););
printStats();
void* p107 = last_address;
PRINT_POINTER(scalloc(88,1););
printStats();
void* p108 = last_address;
PRINT_POINTER(smalloc(74););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p99););
printStats();
PRINT_POINTER(smalloc(208););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p111 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p112 = last_address;
PRINT_POINTER(srealloc(p105,208););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(77););
printStats();
void* p114 = last_address;
DEBUG_PRINT(sfree(p83););
printStats();
PRINT_POINTER(srealloc(p84,201););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(scalloc(2,178););
printStats();
void* p116 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
DEBUG_PRINT(sfree(p79););
printStats();
DEBUG_PRINT(sfree(p89););
printStats();
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(scalloc(140,153););
printStats();
void* p117 = last_address;
PRINT_POINTER(srealloc(p116,218););
printStats();
void* p118 = last_address;
PRINT_POINTER(smalloc(222););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(1,146););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(246,3););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p118,9););
printStats();
void* p122 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(smalloc(126););
printStats();
void* p123 = last_address;
PRINT_POINTER(scalloc(65,59););
printStats();
void* p124 = last_address;
PRINT_POINTER(smalloc(29););
printStats();
void* p125 = last_address;
PRINT_POINTER(smalloc(188););
printStats();
void* p126 = last_address;
PRINT_POINTER(scalloc(218,187););
printStats();
void* p127 = last_address;
PRINT_POINTER(scalloc(231,83););
printStats();
void* p128 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(srealloc(p125,95););
printStats();
void* p129 = last_address;
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(srealloc(p106,153););
printStats();
void* p130 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
PRINT_POINTER(srealloc(p127,133););
printStats();
void* p131 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(srealloc(p74,227););
printStats();
void* p132 = last_address;
PRINT_POINTER(scalloc(93,131););
printStats();
void* p133 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(scalloc(118,136););
printStats();
void* p134 = last_address;
PRINT_POINTER(scalloc(52,108););
printStats();
void* p135 = last_address;
PRINT_POINTER(srealloc(p52,71););
printStats();
void* p136 = last_address;
PRINT_POINTER(smalloc(35););
printStats();
void* p137 = last_address;
PRINT_POINTER(srealloc(p120,138););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(srealloc(p108,130););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(54,55););
printStats();
void* p140 = last_address;
PRINT_POINTER(scalloc(164,196););
printStats();
void* p141 = last_address;
PRINT_POINTER(srealloc(p92,29););
printStats();
void* p142 = last_address;
PRINT_POINTER(smalloc(228););
printStats();
void* p143 = last_address;
PRINT_POINTER(scalloc(92,140););
printStats();
void* p144 = last_address;
PRINT_POINTER(smalloc(65););
printStats();
void* p145 = last_address;
PRINT_POINTER(scalloc(227,89););
printStats();
void* p146 = last_address;
PRINT_POINTER(srealloc(p94,18););
printStats();
void* p147 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
DEBUG_PRINT(sfree(p56););
printStats();
PRINT_POINTER(scalloc(54,37););
printStats();
void* p148 = last_address;
PRINT_POINTER(scalloc(236,162););
printStats();
void* p149 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(scalloc(136,42););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p146););
printStats();
PRINT_POINTER(scalloc(166,52););
printStats();
void* p151 = last_address;
PRINT_POINTER(srealloc(p150,93););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
DEBUG_PRINT(sfree(p126););
printStats();
PRINT_POINTER(scalloc(130,12););
printStats();
void* p153 = last_address;
PRINT_POINTER(scalloc(191,76););
printStats();
void* p154 = last_address;
PRINT_POINTER(scalloc(90,243););
printStats();
void* p155 = last_address;
PRINT_POINTER(srealloc(p135,95););
printStats();
void* p156 = last_address;
PRINT_POINTER(scalloc(18,169););
printStats();
void* p157 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(91,33););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p90,66););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(222););
printStats();
void* p161 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(srealloc(p157,218););
printStats();
void* p162 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(scalloc(193,214););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p159););
printStats();
PRINT_POINTER(scalloc(52,175););
printStats();
void* p164 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p165 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p166 = last_address;
PRINT_POINTER(scalloc(21,84););
printStats();
void* p167 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p168 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
PRINT_POINTER(srealloc(p134,214););
printStats();
void* p169 = last_address;
DEBUG_PRINT(sfree(p113););
printStats();
PRINT_POINTER(scalloc(6,100););
printStats();
void* p170 = last_address;
DEBUG_PRINT(sfree(p130););
printStats();
DEBUG_PRINT(sfree(p141););
printStats();
PRINT_POINTER(smalloc(208););
printStats();
void* p171 = last_address;
PRINT_POINTER(scalloc(241,138););
printStats();
void* p172 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p173 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p174 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p175 = last_address;
PRINT_POINTER(smalloc(108););
printStats();
void* p176 = last_address;
DEBUG_PRINT(sfree(p176););
printStats();
PRINT_POINTER(srealloc(p166,156););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(smalloc(191););
printStats();
void* p178 = last_address;
PRINT_POINTER(scalloc(222,138););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
PRINT_POINTER(srealloc(p172,238););
printStats();
void* p180 = last_address;
PRINT_POINTER(scalloc(101,80););
printStats();
void* p181 = last_address;
PRINT_POINTER(srealloc(p107,108););
printStats();
void* p182 = last_address;
PRINT_POINTER(smalloc(29););
printStats();
void* p183 = last_address;
DEBUG_PRINT(sfree(p179););
printStats();
PRINT_POINTER(smalloc(150););
printStats();
void* p184 = last_address;
PRINT_POINTER(smalloc(100););
printStats();
void* p185 = last_address;
PRINT_POINTER(srealloc(p175,96););
printStats();
void* p186 = last_address;
PRINT_POINTER(scalloc(64,78););
printStats();
void* p187 = last_address;
PRINT_POINTER(srealloc(p122,105););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(101););
printStats();
void* p189 = last_address;
PRINT_POINTER(scalloc(118,96););
printStats();
void* p190 = last_address;
PRINT_POINTER(scalloc(149,138););
printStats();
void* p191 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p192 = last_address;
DEBUG_PRINT(sfree(p173););
printStats();
PRINT_POINTER(scalloc(176,178););
printStats();
void* p193 = last_address;
DEBUG_PRINT(sfree(p163););
printStats();
PRINT_POINTER(srealloc(p171,210););
printStats();
void* p194 = last_address;
DEBUG_PRINT(sfree(p164););
printStats();
PRINT_POINTER(scalloc(142,239););
printStats();
void* p195 = last_address;
PRINT_POINTER(smalloc(181););
printStats();
void* p196 = last_address;
PRINT_POINTER(srealloc(p147,101););
printStats();
void* p197 = last_address;
PRINT_POINTER(srealloc(p145,59););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(scalloc(188,239););
printStats();
void* p199 = last_address;
PRINT_POINTER(srealloc(p183,46););
printStats();
void* p200 = last_address;
PRINT_POINTER(scalloc(1,59););
printStats();
void* p201 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p202 = last_address;
PRINT_POINTER(scalloc(30,167););
printStats();
void* p203 = last_address;
PRINT_POINTER(scalloc(174,156););
printStats();
void* p204 = last_address;
DEBUG_PRINT(sfree(p149););
printStats();
PRINT_POINTER(scalloc(133,236););
printStats();
void* p205 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(smalloc(171););
printStats();
void* p206 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p196,148););
printStats();
void* p208 = last_address;
PRINT_POINTER(scalloc(68,123););
printStats();
void* p209 = last_address;
PRINT_POINTER(scalloc(14,150););
printStats();
void* p210 = last_address;
PRINT_POINTER(smalloc(244););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p184,141););
printStats();
void* p212 = last_address;
PRINT_POINTER(smalloc(82););
printStats();
void* p213 = last_address;
PRINT_POINTER(scalloc(164,151););
printStats();
void* p214 = last_address;
DEBUG_PRINT(sfree(p207););
printStats();
PRINT_POINTER(srealloc(p210,111););
printStats();
void* p215 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
PRINT_POINTER(srealloc(p155,247););
printStats();
void* p216 = last_address;
PRINT_POINTER(scalloc(100,5););
printStats();
void* p217 = last_address;
PRINT_POINTER(smalloc(44););
printStats();
void* p218 = last_address;
PRINT_POINTER(scalloc(106,161););
printStats();
void* p219 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p220 = last_address;
PRINT_POINTER(srealloc(p144,106););
printStats();
void* p221 = last_address;
PRINT_POINTER(smalloc(144););
printStats();
void* p222 = last_address;
DEBUG_PRINT(sfree(p198););
printStats();
DEBUG_PRINT(sfree(p220););
printStats();
PRINT_POINTER(srealloc(p170,62););
printStats();
void* p223 = last_address;
PRINT_POINTER(srealloc(p111,32););
printStats();
void* p224 = last_address;
PRINT_POINTER(scalloc(244,220););
printStats();
void* p225 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p226 = last_address;
DEBUG_PRINT(sfree(p213););
printStats();
PRINT_POINTER(smalloc(16););
printStats();
void* p227 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p228 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
PRINT_POINTER(scalloc(62,199););
printStats();
void* p229 = last_address;
PRINT_POINTER(srealloc(p110,110););
printStats();
void* p230 = last_address;
DEBUG_PRINT(sfree(p200););
printStats();
PRINT_POINTER(scalloc(153,87););
printStats();
void* p231 = last_address;
PRINT_POINTER(srealloc(p148,163););
printStats();
void* p232 = last_address;
PRINT_POINTER(srealloc(p204,138););
printStats();
void* p233 = last_address;
PRINT_POINTER(smalloc(204););
printStats();
void* p234 = last_address;
DEBUG_PRINT(sfree(p87););
printStats();
DEBUG_PRINT(sfree(p167););
printStats();
PRINT_POINTER(srealloc(p191,160););
printStats();
void* p235 = last_address;
PRINT_POINTER(scalloc(201,62););
printStats();
void* p236 = last_address;
PRINT_POINTER(scalloc(233,233););
printStats();
void* p237 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
PRINT_POINTER(scalloc(179,231););
printStats();
void* p238 = last_address;
DEBUG_PRINT(sfree(p143););
printStats();
PRINT_POINTER(smalloc(25););
printStats();
void* p239 = last_address;
PRINT_POINTER(srealloc(p228,91););
printStats();
void* p240 = last_address;
PRINT_POINTER(srealloc(p212,85););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p242 = last_address;
PRINT_POINTER(scalloc(127,241););
printStats();
void* p243 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
PRINT_POINTER(scalloc(133,228););
printStats();
void* p244 = last_address;
PRINT_POINTER(scalloc(46,104););
printStats();
void* p245 = last_address;
DEBUG_PRINT(sfree(p151););
printStats();
PRINT_POINTER(scalloc(25,170););
printStats();
void* p246 = last_address;
PRINT_POINTER(scalloc(131,10););
printStats();
void* p247 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p248 = last_address;
PRINT_POINTER(srealloc(p233,1););
printStats();
void* p249 = last_address;
PRINT_POINTER(srealloc(p237,131););
printStats();
void* p250 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p251 = last_address;
PRINT_POINTER(smalloc(213););
printStats();
void* p252 = last_address;
PRINT_POINTER(scalloc(90,174););
printStats();
void* p253 = last_address;
DEBUG_PRINT(sfree(p241););
printStats();
DEBUG_PRINT(sfree(p133););
printStats();
DEBUG_PRINT(sfree(p229););
printStats();
DEBUG_PRINT(sfree(p238););
printStats();
PRINT_POINTER(srealloc(p214,192););
printStats();
void* p254 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p255 = last_address;
PRINT_POINTER(smalloc(184););
printStats();
void* p256 = last_address;
PRINT_POINTER(srealloc(p138,29););
printStats();
void* p257 = last_address;
PRINT_POINTER(scalloc(225,29););
printStats();
void* p258 = last_address;
PRINT_POINTER(srealloc(p232,240););
printStats();
void* p259 = last_address;
PRINT_POINTER(smalloc(44););
printStats();
void* p260 = last_address;
DEBUG_PRINT(sfree(p208););
printStats();
DEBUG_PRINT(sfree(p177););
printStats();
PRINT_POINTER(scalloc(30,154););
printStats();
void* p261 = last_address;
PRINT_POINTER(scalloc(123,63););
printStats();
void* p262 = last_address;
PRINT_POINTER(srealloc(p188,139););
printStats();
void* p263 = last_address;
PRINT_POINTER(scalloc(68,45););
printStats();
void* p264 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p265 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p266 = last_address;
DEBUG_PRINT(sfree(p201););
printStats();
PRINT_POINTER(scalloc(72,223););
printStats();
void* p267 = last_address;
PRINT_POINTER(srealloc(p267,114););
printStats();
void* p268 = last_address;
PRINT_POINTER(srealloc(p174,34););
printStats();
void* p269 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p270 = last_address;
DEBUG_PRINT(sfree(p251););
printStats();
PRINT_POINTER(scalloc(216,107););
printStats();
void* p271 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p272 = last_address;
PRINT_POINTER(srealloc(p216,159););
printStats();
void* p273 = last_address;
PRINT_POINTER(scalloc(241,201););
printStats();
void* p274 = last_address;
PRINT_POINTER(srealloc(p273,157););
printStats();
void* p275 = last_address;
DEBUG_PRINT(sfree(p235););
printStats();
PRINT_POINTER(scalloc(181,158););
printStats();
void* p276 = last_address;
PRINT_POINTER(scalloc(136,45););
printStats();
void* p277 = last_address;
PRINT_POINTER(srealloc(p199,148););
printStats();
void* p278 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p279 = last_address;
DEBUG_PRINT(sfree(p189););
printStats();
PRINT_POINTER(smalloc(178););
printStats();
void* p280 = last_address;
PRINT_POINTER(scalloc(191,133););
printStats();
void* p281 = last_address;
DEBUG_PRINT(sfree(p197););
printStats();
PRINT_POINTER(srealloc(p281,147););
printStats();
void* p282 = last_address;
DEBUG_PRINT(sfree(p222););
printStats();
DEBUG_PRINT(sfree(p264););
printStats();
PRINT_POINTER(scalloc(22,44););
printStats();
void* p283 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p284 = last_address;
PRINT_POINTER(srealloc(p247,165););
printStats();
void* p285 = last_address;
PRINT_POINTER(scalloc(79,129););
printStats();
void* p286 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p287 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p288 = last_address;
PRINT_POINTER(srealloc(p236,95););
printStats();
void* p289 = last_address;
PRINT_POINTER(srealloc(p211,92););
printStats();
void* p290 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p291 = last_address;
DEBUG_PRINT(sfree(p226););
printStats();
DEBUG_PRINT(sfree(p253););
printStats();
DEBUG_PRINT(sfree(p231););
printStats();
PRINT_POINTER(smalloc(164););
printStats();
void* p292 = last_address;
DEBUG_PRINT(sfree(p272););
printStats();
PRINT_POINTER(scalloc(80,64););
printStats();
void* p293 = last_address;
PRINT_POINTER(scalloc(27,82););
printStats();
void* p294 = last_address;
PRINT_POINTER(scalloc(160,113););
printStats();
void* p295 = last_address;
PRINT_POINTER(scalloc(10,61););
printStats();
void* p296 = last_address;
PRINT_POINTER(scalloc(145,24););
printStats();
void* p297 = last_address;
PRINT_POINTER(srealloc(p215,16););
printStats();
void* p298 = last_address;
PRINT_POINTER(srealloc(p288,95););
printStats();
void* p299 = last_address;
PRINT_POINTER(scalloc(19,160););
printStats();
void* p300 = last_address;
PRINT_POINTER(scalloc(142,9););
printStats();
void* p301 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p302 = last_address;
PRINT_POINTER(smalloc(34););
printStats();
void* p303 = last_address;
PRINT_POINTER(srealloc(p270,110););
printStats();
void* p304 = last_address;
DEBUG_PRINT(sfree(p294););
printStats();
DEBUG_PRINT(sfree(p185););
printStats();
PRINT_POINTER(scalloc(13,77););
printStats();
void* p305 = last_address;
PRINT_POINTER(srealloc(p298,202););
printStats();
void* p306 = last_address;
PRINT_POINTER(scalloc(136,36););
printStats();
void* p307 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p308 = last_address;
PRINT_POINTER(scalloc(30,18););
printStats();
void* p309 = last_address;
PRINT_POINTER(smalloc(234););
printStats();
void* p310 = last_address;
PRINT_POINTER(scalloc(226,61););
printStats();
void* p311 = last_address;
PRINT_POINTER(srealloc(p115,134););
printStats();
void* p312 = last_address;
PRINT_POINTER(scalloc(57,248););
printStats();
void* p313 = last_address;
PRINT_POINTER(scalloc(76,95););
printStats();
void* p314 = last_address;
PRINT_POINTER(srealloc(p299,170););
printStats();
void* p315 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p316 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p317 = last_address;
PRINT_POINTER(srealloc(p263,163););
printStats();
void* p318 = last_address;
PRINT_POINTER(srealloc(p205,59););
printStats();
void* p319 = last_address;
DEBUG_PRINT(sfree(p244););
printStats();
DEBUG_PRINT(sfree(p256););
printStats();
PRINT_POINTER(smalloc(15););
printStats();
void* p320 = last_address;
PRINT_POINTER(smalloc(147););
printStats();
void* p321 = last_address;
DEBUG_PRINT(sfree(p119););
printStats();
}
