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
                        PRINT_POINTER(scalloc(147,78););
printStats();
void* p0 = last_address;
PRINT_POINTER(smalloc(155););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(srealloc(p1,211););
printStats();
void* p2 = last_address;
PRINT_POINTER(srealloc(p2,50););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p3,193););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(scalloc(244,172););
printStats();
void* p5 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(scalloc(17,39););
printStats();
void* p6 = last_address;
PRINT_POINTER(srealloc(p6,83););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(150,46););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p10 = last_address;
PRINT_POINTER(smalloc(155););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(246););
printStats();
void* p13 = last_address;
PRINT_POINTER(srealloc(p11,69););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(230,66););
printStats();
void* p16 = last_address;
PRINT_POINTER(scalloc(65,128););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
DEBUG_PRINT(sfree(p8););
printStats();
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(scalloc(63,89););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(48););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(14,56););
printStats();
void* p20 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(152,45););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(148,238););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p9,186););
printStats();
void* p24 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p25 = last_address;
PRINT_POINTER(srealloc(p14,244););
printStats();
void* p26 = last_address;
PRINT_POINTER(smalloc(172););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p25,50););
printStats();
void* p29 = last_address;
DEBUG_PRINT(sfree(p19););
printStats();
PRINT_POINTER(srealloc(p22,186););
printStats();
void* p30 = last_address;
PRINT_POINTER(srealloc(p27,121););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p32 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
PRINT_POINTER(srealloc(p21,163););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p34 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p30,100););
printStats();
void* p35 = last_address;
PRINT_POINTER(srealloc(p10,239););
printStats();
void* p36 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(125););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(18,148););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p39 = last_address;
PRINT_POINTER(srealloc(p18,129););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(scalloc(236,166););
printStats();
void* p41 = last_address;
PRINT_POINTER(srealloc(p13,11););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(srealloc(p31,138););
printStats();
void* p43 = last_address;
PRINT_POINTER(scalloc(15,153););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p43,162););
printStats();
void* p46 = last_address;
PRINT_POINTER(srealloc(p41,71););
printStats();
void* p47 = last_address;
PRINT_POINTER(srealloc(p47,220););
printStats();
void* p48 = last_address;
PRINT_POINTER(smalloc(76););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(59,239););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(154,238););
printStats();
void* p51 = last_address;
PRINT_POINTER(smalloc(181););
printStats();
void* p52 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
DEBUG_PRINT(sfree(p39););
printStats();
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(scalloc(216,187););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p24););
printStats();
PRINT_POINTER(smalloc(245););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(smalloc(1););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(170,158););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(scalloc(84,138););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(scalloc(247,221););
printStats();
void* p59 = last_address;
PRINT_POINTER(scalloc(122,161););
printStats();
void* p60 = last_address;
PRINT_POINTER(scalloc(169,125););
printStats();
void* p61 = last_address;
PRINT_POINTER(scalloc(104,212););
printStats();
void* p62 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p63 = last_address;
PRINT_POINTER(smalloc(80););
printStats();
void* p64 = last_address;
PRINT_POINTER(smalloc(77););
printStats();
void* p65 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
PRINT_POINTER(srealloc(p56,244););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p48,85););
printStats();
void* p67 = last_address;
PRINT_POINTER(scalloc(157,57););
printStats();
void* p68 = last_address;
PRINT_POINTER(srealloc(p29,78););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(srealloc(p32,24););
printStats();
void* p70 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(scalloc(11,47););
printStats();
void* p71 = last_address;
DEBUG_PRINT(sfree(p65););
printStats();
PRINT_POINTER(srealloc(p58,161););
printStats();
void* p72 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(scalloc(60,7););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p72,47););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p33,40););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(scalloc(176,111););
printStats();
void* p76 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(smalloc(21););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p78 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(217,163););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(smalloc(228););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p62,222););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(smalloc(185););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(smalloc(1););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p84););
printStats();
PRINT_POINTER(scalloc(233,84););
printStats();
void* p85 = last_address;
PRINT_POINTER(srealloc(p82,117););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(104,155););
printStats();
void* p87 = last_address;
PRINT_POINTER(srealloc(p74,48););
printStats();
void* p88 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
DEBUG_PRINT(sfree(p87););
printStats();
PRINT_POINTER(srealloc(p80,194););
printStats();
void* p89 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p90 = last_address;
PRINT_POINTER(scalloc(238,204););
printStats();
void* p91 = last_address;
PRINT_POINTER(srealloc(p71,59););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(65,51););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p94 = last_address;
PRINT_POINTER(scalloc(93,144););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p83,202););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(srealloc(p73,18););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p60,154););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(218,206););
printStats();
void* p99 = last_address;
DEBUG_PRINT(sfree(p53););
printStats();
PRINT_POINTER(scalloc(57,226););
printStats();
void* p100 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p101 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(smalloc(99););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(29););
printStats();
void* p103 = last_address;
PRINT_POINTER(smalloc(103););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p86,225););
printStats();
void* p105 = last_address;
PRINT_POINTER(srealloc(p91,48););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(205,198););
printStats();
void* p107 = last_address;
PRINT_POINTER(smalloc(92););
printStats();
void* p108 = last_address;
PRINT_POINTER(scalloc(94,65););
printStats();
void* p109 = last_address;
PRINT_POINTER(srealloc(p36,1););
printStats();
void* p110 = last_address;
PRINT_POINTER(scalloc(133,95););
printStats();
void* p111 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(scalloc(184,185););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(174););
printStats();
void* p114 = last_address;
PRINT_POINTER(srealloc(p95,134););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(165,238););
printStats();
void* p116 = last_address;
DEBUG_PRINT(sfree(p105););
printStats();
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(srealloc(p100,91););
printStats();
void* p117 = last_address;
PRINT_POINTER(srealloc(p68,134););
printStats();
void* p118 = last_address;
PRINT_POINTER(srealloc(p94,179););
printStats();
void* p119 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(scalloc(218,145););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p93););
printStats();
PRINT_POINTER(smalloc(155););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p63,211););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(37,31););
printStats();
void* p123 = last_address;
PRINT_POINTER(smalloc(123););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(srealloc(p92,196););
printStats();
void* p125 = last_address;
PRINT_POINTER(scalloc(5,18););
printStats();
void* p126 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
PRINT_POINTER(srealloc(p77,168););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(scalloc(6,40););
printStats();
void* p128 = last_address;
PRINT_POINTER(srealloc(p76,162););
printStats();
void* p129 = last_address;
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(scalloc(229,34););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p131 = last_address;
PRINT_POINTER(scalloc(45,111););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p133 = last_address;
PRINT_POINTER(srealloc(p120,97););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p104,46););
printStats();
void* p135 = last_address;
DEBUG_PRINT(sfree(p102););
printStats();
DEBUG_PRINT(sfree(p122););
printStats();
DEBUG_PRINT(sfree(p125););
printStats();
DEBUG_PRINT(sfree(p133););
printStats();
PRINT_POINTER(srealloc(p98,142););
printStats();
void* p136 = last_address;
PRINT_POINTER(scalloc(246,132););
printStats();
void* p137 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p115););
printStats();
PRINT_POINTER(scalloc(97,162););
printStats();
void* p139 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p140 = last_address;
PRINT_POINTER(srealloc(p128,83););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(228,239););
printStats();
void* p142 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p143 = last_address;
PRINT_POINTER(srealloc(p124,244););
printStats();
void* p144 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
DEBUG_PRINT(sfree(p99););
printStats();
PRINT_POINTER(srealloc(p114,21););
printStats();
void* p145 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p146 = last_address;
PRINT_POINTER(srealloc(p141,188););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(177,66););
printStats();
void* p148 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(smalloc(133););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p85,42););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(scalloc(229,247););
printStats();
void* p151 = last_address;
PRINT_POINTER(srealloc(p145,8););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(srealloc(p96,249););
printStats();
void* p153 = last_address;
PRINT_POINTER(srealloc(p153,232););
printStats();
void* p154 = last_address;
PRINT_POINTER(scalloc(115,145););
printStats();
void* p155 = last_address;
PRINT_POINTER(srealloc(p143,242););
printStats();
void* p156 = last_address;
DEBUG_PRINT(sfree(p139););
printStats();
PRINT_POINTER(srealloc(p59,75););
printStats();
void* p157 = last_address;
PRINT_POINTER(srealloc(p107,149););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(21,159););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p112,229););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(42););
printStats();
void* p161 = last_address;
PRINT_POINTER(smalloc(244););
printStats();
void* p162 = last_address;
PRINT_POINTER(srealloc(p155,234););
printStats();
void* p163 = last_address;
PRINT_POINTER(scalloc(243,15););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(srealloc(p69,31););
printStats();
void* p165 = last_address;
PRINT_POINTER(srealloc(p130,246););
printStats();
void* p166 = last_address;
DEBUG_PRINT(sfree(p148););
printStats();
PRINT_POINTER(scalloc(226,59););
printStats();
void* p167 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p168 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p169 = last_address;
PRINT_POINTER(srealloc(p146,79););
printStats();
void* p170 = last_address;
PRINT_POINTER(scalloc(20,183););
printStats();
void* p171 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p172 = last_address;
PRINT_POINTER(srealloc(p172,230););
printStats();
void* p173 = last_address;
PRINT_POINTER(smalloc(104););
printStats();
void* p174 = last_address;
PRINT_POINTER(srealloc(p151,52););
printStats();
void* p175 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p176 = last_address;
DEBUG_PRINT(sfree(p170););
printStats();
PRINT_POINTER(scalloc(240,28););
printStats();
void* p177 = last_address;
PRINT_POINTER(scalloc(84,33););
printStats();
void* p178 = last_address;
PRINT_POINTER(srealloc(p173,72););
printStats();
void* p179 = last_address;
PRINT_POINTER(srealloc(p138,12););
printStats();
void* p180 = last_address;
PRINT_POINTER(srealloc(p175,80););
printStats();
void* p181 = last_address;
PRINT_POINTER(scalloc(139,244););
printStats();
void* p182 = last_address;
PRINT_POINTER(srealloc(p159,144););
printStats();
void* p183 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(srealloc(p149,238););
printStats();
void* p184 = last_address;
PRINT_POINTER(scalloc(221,170););
printStats();
void* p185 = last_address;
PRINT_POINTER(srealloc(p108,103););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p131););
printStats();
PRINT_POINTER(smalloc(172););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(13,231););
printStats();
void* p188 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(smalloc(243););
printStats();
void* p189 = last_address;
DEBUG_PRINT(sfree(p162););
printStats();
DEBUG_PRINT(sfree(p134););
printStats();
PRINT_POINTER(srealloc(p150,21););
printStats();
void* p190 = last_address;
PRINT_POINTER(srealloc(p88,20););
printStats();
void* p191 = last_address;
PRINT_POINTER(scalloc(76,140););
printStats();
void* p192 = last_address;
PRINT_POINTER(scalloc(145,193););
printStats();
void* p193 = last_address;
PRINT_POINTER(scalloc(192,172););
printStats();
void* p194 = last_address;
PRINT_POINTER(smalloc(147););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p45,35););
printStats();
void* p196 = last_address;
PRINT_POINTER(scalloc(173,157););
printStats();
void* p197 = last_address;
PRINT_POINTER(smalloc(125););
printStats();
void* p198 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p199 = last_address;
PRINT_POINTER(scalloc(86,208););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p199,154););
printStats();
void* p201 = last_address;
PRINT_POINTER(srealloc(p191,118););
printStats();
void* p202 = last_address;
PRINT_POINTER(srealloc(p70,26););
printStats();
void* p203 = last_address;
PRINT_POINTER(scalloc(163,6););
printStats();
void* p204 = last_address;
PRINT_POINTER(srealloc(p142,216););
printStats();
void* p205 = last_address;
PRINT_POINTER(scalloc(135,44););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(3,96););
printStats();
void* p207 = last_address;
PRINT_POINTER(scalloc(131,182););
printStats();
void* p208 = last_address;
DEBUG_PRINT(sfree(p197););
printStats();
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(smalloc(7););
printStats();
void* p209 = last_address;
PRINT_POINTER(scalloc(194,240););
printStats();
void* p210 = last_address;
PRINT_POINTER(srealloc(p194,150););
printStats();
void* p211 = last_address;
PRINT_POINTER(smalloc(185););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
PRINT_POINTER(srealloc(p180,112););
printStats();
void* p213 = last_address;
PRINT_POINTER(srealloc(p176,91););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(93););
printStats();
void* p215 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p216 = last_address;
PRINT_POINTER(srealloc(p187,2););
printStats();
void* p217 = last_address;
PRINT_POINTER(scalloc(111,90););
printStats();
void* p218 = last_address;
PRINT_POINTER(scalloc(222,182););
printStats();
void* p219 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p220 = last_address;
PRINT_POINTER(srealloc(p214,19););
printStats();
void* p221 = last_address;
PRINT_POINTER(smalloc(218););
printStats();
void* p222 = last_address;
PRINT_POINTER(smalloc(225););
printStats();
void* p223 = last_address;
PRINT_POINTER(scalloc(65,31););
printStats();
void* p224 = last_address;
DEBUG_PRINT(sfree(p157););
printStats();
PRINT_POINTER(smalloc(96););
printStats();
void* p225 = last_address;
}
