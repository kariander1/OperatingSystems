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
                        PRINT_POINTER(scalloc(9,214););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(smalloc(25););
printStats();
void* p1 = last_address;
PRINT_POINTER(scalloc(95,9););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(215,98););
printStats();
void* p3 = last_address;
PRINT_POINTER(scalloc(73,216););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p1,42););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p2,56););
printStats();
void* p6 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p7 = last_address;
PRINT_POINTER(scalloc(215,38););
printStats();
void* p8 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p9 = last_address;
PRINT_POINTER(scalloc(210,133););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(srealloc(p6,41););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p5,57););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(smalloc(218););
printStats();
void* p13 = last_address;
PRINT_POINTER(srealloc(p13,162););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p15 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(srealloc(p11,150););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(118););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(srealloc(p10,53););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p19 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p19,40););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(srealloc(p18,240););
printStats();
void* p21 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(smalloc(27););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(65,105););
printStats();
void* p23 = last_address;
PRINT_POINTER(smalloc(29););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p3,40););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p26 = last_address;
PRINT_POINTER(scalloc(10,10););
printStats();
void* p27 = last_address;
PRINT_POINTER(srealloc(p15,1););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p9,214););
printStats();
void* p29 = last_address;
PRINT_POINTER(scalloc(51,169););
printStats();
void* p30 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(14,153););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(83););
printStats();
void* p32 = last_address;
PRINT_POINTER(srealloc(p28,229););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p34 = last_address;
PRINT_POINTER(scalloc(162,31););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(23,128););
printStats();
void* p36 = last_address;
PRINT_POINTER(scalloc(186,242););
printStats();
void* p37 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(smalloc(233););
printStats();
void* p38 = last_address;
PRINT_POINTER(scalloc(111,241););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(230,205););
printStats();
void* p40 = last_address;
PRINT_POINTER(srealloc(p39,167););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(115,180););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(228););
printStats();
void* p43 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(srealloc(p23,99););
printStats();
void* p44 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
PRINT_POINTER(smalloc(151););
printStats();
void* p45 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
DEBUG_PRINT(sfree(p29););
printStats();
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(srealloc(p22,83););
printStats();
void* p46 = last_address;
PRINT_POINTER(scalloc(30,66););
printStats();
void* p47 = last_address;
PRINT_POINTER(srealloc(p34,82););
printStats();
void* p48 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(scalloc(115,197););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(165,149););
printStats();
void* p50 = last_address;
PRINT_POINTER(smalloc(150););
printStats();
void* p51 = last_address;
PRINT_POINTER(srealloc(p50,98););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p31,40););
printStats();
void* p53 = last_address;
PRINT_POINTER(scalloc(62,210););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p55 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p56 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
DEBUG_PRINT(sfree(p26););
printStats();
PRINT_POINTER(smalloc(88););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(smalloc(115););
printStats();
void* p58 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p59 = last_address;
PRINT_POINTER(scalloc(145,53););
printStats();
void* p60 = last_address;
PRINT_POINTER(scalloc(61,54););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p59,185););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(134,79););
printStats();
void* p63 = last_address;
PRINT_POINTER(scalloc(25,51););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p14););
printStats();
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(scalloc(197,154););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p24,207););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p67 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(scalloc(36,69););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(smalloc(234););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p67,67););
printStats();
void* p71 = last_address;
PRINT_POINTER(smalloc(184););
printStats();
void* p72 = last_address;
PRINT_POINTER(scalloc(226,160););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p25,36););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(158););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(45,229););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p66,240););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(120););
printStats();
void* p78 = last_address;
PRINT_POINTER(smalloc(170););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(200,197););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(smalloc(49););
printStats();
void* p81 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(scalloc(102,14););
printStats();
void* p83 = last_address;
PRINT_POINTER(srealloc(p79,61););
printStats();
void* p84 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p85 = last_address;
PRINT_POINTER(srealloc(p65,24););
printStats();
void* p86 = last_address;
PRINT_POINTER(smalloc(80););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(68););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(170););
printStats();
void* p89 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p90 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(srealloc(p51,196););
printStats();
void* p91 = last_address;
PRINT_POINTER(scalloc(236,100););
printStats();
void* p92 = last_address;
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(scalloc(214,130););
printStats();
void* p93 = last_address;
PRINT_POINTER(scalloc(138,243););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(srealloc(p45,73););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p53,96););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
DEBUG_PRINT(sfree(p88););
printStats();
DEBUG_PRINT(sfree(p75););
printStats();
DEBUG_PRINT(sfree(p35););
printStats();
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(srealloc(p56,67););
printStats();
void* p97 = last_address;
PRINT_POINTER(scalloc(233,211););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(178,8););
printStats();
void* p99 = last_address;
PRINT_POINTER(srealloc(p81,188););
printStats();
void* p100 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(srealloc(p69,191););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(225,190););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(6););
printStats();
void* p103 = last_address;
PRINT_POINTER(smalloc(100););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p82,143););
printStats();
void* p105 = last_address;
PRINT_POINTER(smalloc(131););
printStats();
void* p106 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(srealloc(p63,233););
printStats();
void* p107 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p90,217););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(srealloc(p84,130););
printStats();
void* p110 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(srealloc(p96,77););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p100,120););
printStats();
void* p112 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p113 = last_address;
PRINT_POINTER(scalloc(179,51););
printStats();
void* p114 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(scalloc(67,70););
printStats();
void* p115 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p116 = last_address;
PRINT_POINTER(srealloc(p47,115););
printStats();
void* p117 = last_address;
DEBUG_PRINT(sfree(p115););
printStats();
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(smalloc(142););
printStats();
void* p118 = last_address;
PRINT_POINTER(smalloc(241););
printStats();
void* p119 = last_address;
PRINT_POINTER(srealloc(p94,123););
printStats();
void* p120 = last_address;
PRINT_POINTER(srealloc(p92,193););
printStats();
void* p121 = last_address;
DEBUG_PRINT(sfree(p108););
printStats();
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(scalloc(101,20););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(128,85););
printStats();
void* p123 = last_address;
PRINT_POINTER(srealloc(p110,104););
printStats();
void* p124 = last_address;
PRINT_POINTER(srealloc(p97,98););
printStats();
void* p125 = last_address;
PRINT_POINTER(scalloc(200,184););
printStats();
void* p126 = last_address;
PRINT_POINTER(srealloc(p121,177););
printStats();
void* p127 = last_address;
PRINT_POINTER(scalloc(196,130););
printStats();
void* p128 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(220););
printStats();
void* p129 = last_address;
PRINT_POINTER(smalloc(178););
printStats();
void* p130 = last_address;
PRINT_POINTER(scalloc(94,169););
printStats();
void* p131 = last_address;
PRINT_POINTER(scalloc(144,58););
printStats();
void* p132 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
PRINT_POINTER(srealloc(p93,89););
printStats();
void* p133 = last_address;
PRINT_POINTER(scalloc(153,16););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p62,106););
printStats();
void* p135 = last_address;
PRINT_POINTER(scalloc(46,27););
printStats();
void* p136 = last_address;
PRINT_POINTER(srealloc(p130,226););
printStats();
void* p137 = last_address;
DEBUG_PRINT(sfree(p76););
printStats();
PRINT_POINTER(scalloc(42,174););
printStats();
void* p138 = last_address;
PRINT_POINTER(srealloc(p98,209););
printStats();
void* p139 = last_address;
PRINT_POINTER(srealloc(p99,156););
printStats();
void* p140 = last_address;
PRINT_POINTER(scalloc(76,184););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(233,40););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p118,20););
printStats();
void* p143 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p144 = last_address;
PRINT_POINTER(scalloc(185,179););
printStats();
void* p145 = last_address;
DEBUG_PRINT(sfree(p133););
printStats();
PRINT_POINTER(srealloc(p135,174););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(5););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(118,193););
printStats();
void* p148 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p149 = last_address;
PRINT_POINTER(smalloc(36););
printStats();
void* p150 = last_address;
PRINT_POINTER(srealloc(p105,135););
printStats();
void* p151 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
DEBUG_PRINT(sfree(p129););
printStats();
PRINT_POINTER(smalloc(103););
printStats();
void* p152 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p153 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(194););
printStats();
void* p155 = last_address;
PRINT_POINTER(srealloc(p116,232););
printStats();
void* p156 = last_address;
PRINT_POINTER(srealloc(p122,178););
printStats();
void* p157 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
PRINT_POINTER(smalloc(223););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(150,8););
printStats();
void* p159 = last_address;
DEBUG_PRINT(sfree(p158););
printStats();
PRINT_POINTER(smalloc(175););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(107););
printStats();
void* p161 = last_address;
DEBUG_PRINT(sfree(p146););
printStats();
PRINT_POINTER(srealloc(p145,44););
printStats();
void* p162 = last_address;
DEBUG_PRINT(sfree(p71););
printStats();
PRINT_POINTER(srealloc(p113,118););
printStats();
void* p163 = last_address;
PRINT_POINTER(scalloc(167,134););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p141););
printStats();
DEBUG_PRINT(sfree(p120););
printStats();
PRINT_POINTER(smalloc(156););
printStats();
void* p165 = last_address;
PRINT_POINTER(srealloc(p125,234););
printStats();
void* p166 = last_address;
PRINT_POINTER(srealloc(p132,219););
printStats();
void* p167 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(srealloc(p124,111););
printStats();
void* p168 = last_address;
PRINT_POINTER(smalloc(204););
printStats();
void* p169 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
PRINT_POINTER(scalloc(6,16););
printStats();
void* p170 = last_address;
PRINT_POINTER(srealloc(p156,213););
printStats();
void* p171 = last_address;
PRINT_POINTER(scalloc(241,110););
printStats();
void* p172 = last_address;
PRINT_POINTER(smalloc(194););
printStats();
void* p173 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p174 = last_address;
PRINT_POINTER(srealloc(p131,18););
printStats();
void* p175 = last_address;
PRINT_POINTER(srealloc(p170,18););
printStats();
void* p176 = last_address;
PRINT_POINTER(scalloc(249,218););
printStats();
void* p177 = last_address;
PRINT_POINTER(smalloc(38););
printStats();
void* p178 = last_address;
DEBUG_PRINT(sfree(p126););
printStats();
PRINT_POINTER(scalloc(128,86););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(scalloc(185,109););
printStats();
void* p180 = last_address;
PRINT_POINTER(srealloc(p154,173););
printStats();
void* p181 = last_address;
PRINT_POINTER(srealloc(p143,193););
printStats();
void* p182 = last_address;
PRINT_POINTER(scalloc(116,123););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(179,163););
printStats();
void* p184 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p185 = last_address;
PRINT_POINTER(smalloc(81););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(srealloc(p148,25););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(232,228););
printStats();
void* p188 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
PRINT_POINTER(scalloc(209,154););
printStats();
void* p189 = last_address;
PRINT_POINTER(srealloc(p176,80););
printStats();
void* p190 = last_address;
PRINT_POINTER(scalloc(70,49););
printStats();
void* p191 = last_address;
DEBUG_PRINT(sfree(p139););
printStats();
DEBUG_PRINT(sfree(p151););
printStats();
PRINT_POINTER(scalloc(54,133););
printStats();
void* p192 = last_address;
PRINT_POINTER(scalloc(162,109););
printStats();
void* p193 = last_address;
PRINT_POINTER(smalloc(51););
printStats();
void* p194 = last_address;
PRINT_POINTER(srealloc(p134,5););
printStats();
void* p195 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p196 = last_address;
PRINT_POINTER(srealloc(p127,83););
printStats();
void* p197 = last_address;
PRINT_POINTER(smalloc(169););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p195););
printStats();
PRINT_POINTER(smalloc(72););
printStats();
void* p199 = last_address;
PRINT_POINTER(scalloc(211,236););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p153,43););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
PRINT_POINTER(scalloc(235,3););
printStats();
void* p202 = last_address;
PRINT_POINTER(srealloc(p160,57););
printStats();
void* p203 = last_address;
PRINT_POINTER(srealloc(p74,69););
printStats();
void* p204 = last_address;
PRINT_POINTER(scalloc(144,52););
printStats();
void* p205 = last_address;
DEBUG_PRINT(sfree(p168););
printStats();
PRINT_POINTER(srealloc(p169,136););
printStats();
void* p206 = last_address;
PRINT_POINTER(srealloc(p106,236););
printStats();
void* p207 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p208 = last_address;
PRINT_POINTER(srealloc(p202,101););
printStats();
void* p209 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p210 = last_address;
PRINT_POINTER(srealloc(p164,249););
printStats();
void* p211 = last_address;
PRINT_POINTER(smalloc(8););
printStats();
void* p212 = last_address;
PRINT_POINTER(scalloc(65,233););
printStats();
void* p213 = last_address;
PRINT_POINTER(smalloc(4););
printStats();
void* p214 = last_address;
PRINT_POINTER(srealloc(p138,15););
printStats();
void* p215 = last_address;
DEBUG_PRINT(sfree(p214););
printStats();
PRINT_POINTER(scalloc(75,91););
printStats();
void* p216 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(scalloc(27,196););
printStats();
void* p217 = last_address;
DEBUG_PRINT(sfree(p209););
printStats();
PRINT_POINTER(scalloc(69,84););
printStats();
void* p218 = last_address;
PRINT_POINTER(smalloc(77););
printStats();
void* p219 = last_address;
PRINT_POINTER(scalloc(109,220););
printStats();
void* p220 = last_address;
PRINT_POINTER(srealloc(p150,109););
printStats();
void* p221 = last_address;
PRINT_POINTER(srealloc(p208,126););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p181,125););
printStats();
void* p223 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p224 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p225 = last_address;
PRINT_POINTER(smalloc(178););
printStats();
void* p226 = last_address;
PRINT_POINTER(scalloc(134,143););
printStats();
void* p227 = last_address;
PRINT_POINTER(scalloc(219,108););
printStats();
void* p228 = last_address;
PRINT_POINTER(smalloc(222););
printStats();
void* p229 = last_address;
PRINT_POINTER(scalloc(11,116););
printStats();
void* p230 = last_address;
DEBUG_PRINT(sfree(p198););
printStats();
PRINT_POINTER(srealloc(p223,55););
printStats();
void* p231 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
DEBUG_PRINT(sfree(p163););
printStats();
PRINT_POINTER(smalloc(216););
printStats();
void* p232 = last_address;
DEBUG_PRINT(sfree(p231););
printStats();
PRINT_POINTER(smalloc(83););
printStats();
void* p233 = last_address;
PRINT_POINTER(srealloc(p227,24););
printStats();
void* p234 = last_address;
PRINT_POINTER(scalloc(215,179););
printStats();
void* p235 = last_address;
PRINT_POINTER(smalloc(140););
printStats();
void* p236 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p237 = last_address;
PRINT_POINTER(srealloc(p233,140););
printStats();
void* p238 = last_address;
PRINT_POINTER(scalloc(162,97););
printStats();
void* p239 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p240 = last_address;
PRINT_POINTER(scalloc(143,230););
printStats();
void* p241 = last_address;
DEBUG_PRINT(sfree(p197););
printStats();
DEBUG_PRINT(sfree(p187););
printStats();
PRINT_POINTER(srealloc(p162,202););
printStats();
void* p242 = last_address;
PRINT_POINTER(srealloc(p182,179););
printStats();
void* p243 = last_address;
PRINT_POINTER(srealloc(p186,135););
printStats();
void* p244 = last_address;
PRINT_POINTER(srealloc(p83,198););
printStats();
void* p245 = last_address;
DEBUG_PRINT(sfree(p119););
printStats();
PRINT_POINTER(srealloc(p221,23););
printStats();
void* p246 = last_address;
PRINT_POINTER(srealloc(p173,121););
printStats();
void* p247 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(scalloc(171,181););
printStats();
void* p248 = last_address;
PRINT_POINTER(srealloc(p172,150););
printStats();
void* p249 = last_address;
PRINT_POINTER(scalloc(103,242););
printStats();
void* p250 = last_address;
PRINT_POINTER(scalloc(76,236););
printStats();
void* p251 = last_address;
PRINT_POINTER(scalloc(104,94););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p213););
printStats();
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(scalloc(4,187););
printStats();
void* p253 = last_address;
PRINT_POINTER(srealloc(p212,94););
printStats();
void* p254 = last_address;
PRINT_POINTER(scalloc(158,206););
printStats();
void* p255 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(scalloc(75,155););
printStats();
void* p256 = last_address;
PRINT_POINTER(scalloc(216,30););
printStats();
void* p257 = last_address;
DEBUG_PRINT(sfree(p236););
printStats();
PRINT_POINTER(scalloc(247,6););
printStats();
void* p258 = last_address;
PRINT_POINTER(smalloc(181););
printStats();
void* p259 = last_address;
PRINT_POINTER(srealloc(p203,215););
printStats();
void* p260 = last_address;
DEBUG_PRINT(sfree(p183););
printStats();
PRINT_POINTER(scalloc(32,25););
printStats();
void* p261 = last_address;
PRINT_POINTER(scalloc(85,100););
printStats();
void* p262 = last_address;
PRINT_POINTER(smalloc(170););
printStats();
void* p263 = last_address;
PRINT_POINTER(smalloc(32););
printStats();
void* p264 = last_address;
PRINT_POINTER(scalloc(2,241););
printStats();
void* p265 = last_address;
PRINT_POINTER(srealloc(p222,227););
printStats();
void* p266 = last_address;
PRINT_POINTER(smalloc(0););
printStats();
void* p267 = last_address;
PRINT_POINTER(scalloc(229,137););
printStats();
void* p268 = last_address;
PRINT_POINTER(scalloc(23,214););
printStats();
void* p269 = last_address;
PRINT_POINTER(scalloc(38,113););
printStats();
void* p270 = last_address;
DEBUG_PRINT(sfree(p48););
printStats();
DEBUG_PRINT(sfree(p117););
printStats();
PRINT_POINTER(srealloc(p215,76););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(174,240););
printStats();
void* p272 = last_address;
DEBUG_PRINT(sfree(p269););
printStats();
PRINT_POINTER(smalloc(98););
printStats();
void* p273 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p274 = last_address;
PRINT_POINTER(srealloc(p207,96););
printStats();
void* p275 = last_address;
PRINT_POINTER(smalloc(102););
printStats();
void* p276 = last_address;
PRINT_POINTER(srealloc(p258,164););
printStats();
void* p277 = last_address;
PRINT_POINTER(scalloc(134,226););
printStats();
void* p278 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
PRINT_POINTER(smalloc(60););
printStats();
void* p279 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p280 = last_address;
DEBUG_PRINT(sfree(p157););
printStats();
PRINT_POINTER(srealloc(p188,4););
printStats();
void* p281 = last_address;
DEBUG_PRINT(sfree(p230););
printStats();
PRINT_POINTER(srealloc(p159,221););
printStats();
void* p282 = last_address;
DEBUG_PRINT(sfree(p196););
printStats();
PRINT_POINTER(smalloc(26););
printStats();
void* p283 = last_address;
PRINT_POINTER(srealloc(p205,61););
printStats();
void* p284 = last_address;
PRINT_POINTER(scalloc(103,17););
printStats();
void* p285 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p286 = last_address;
PRINT_POINTER(scalloc(52,44););
printStats();
void* p287 = last_address;
PRINT_POINTER(srealloc(p286,144););
printStats();
void* p288 = last_address;
PRINT_POINTER(srealloc(p201,166););
printStats();
void* p289 = last_address;
PRINT_POINTER(srealloc(p260,193););
printStats();
void* p290 = last_address;
PRINT_POINTER(scalloc(61,131););
printStats();
void* p291 = last_address;
PRINT_POINTER(srealloc(p261,164););
printStats();
void* p292 = last_address;
DEBUG_PRINT(sfree(p216););
printStats();
PRINT_POINTER(smalloc(163););
printStats();
void* p293 = last_address;
DEBUG_PRINT(sfree(p204););
printStats();
PRINT_POINTER(scalloc(108,95););
printStats();
void* p294 = last_address;
PRINT_POINTER(scalloc(218,169););
printStats();
void* p295 = last_address;
DEBUG_PRINT(sfree(p292););
printStats();
PRINT_POINTER(smalloc(225););
printStats();
void* p296 = last_address;
DEBUG_PRINT(sfree(p232););
printStats();
PRINT_POINTER(smalloc(98););
printStats();
void* p297 = last_address;
DEBUG_PRINT(sfree(p291););
printStats();
PRINT_POINTER(smalloc(205););
printStats();
void* p298 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p299 = last_address;
PRINT_POINTER(srealloc(p190,208););
printStats();
void* p300 = last_address;
PRINT_POINTER(scalloc(210,128););
printStats();
void* p301 = last_address;
PRINT_POINTER(srealloc(p273,52););
printStats();
void* p302 = last_address;
DEBUG_PRINT(sfree(p278););
printStats();
PRINT_POINTER(srealloc(p217,210););
printStats();
void* p303 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p304 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p305 = last_address;
PRINT_POINTER(scalloc(246,221););
printStats();
void* p306 = last_address;
DEBUG_PRINT(sfree(p272););
printStats();
PRINT_POINTER(scalloc(110,20););
printStats();
void* p307 = last_address;
PRINT_POINTER(srealloc(p211,213););
printStats();
void* p308 = last_address;
DEBUG_PRINT(sfree(p184););
printStats();
PRINT_POINTER(scalloc(107,157););
printStats();
void* p309 = last_address;
PRINT_POINTER(srealloc(p171,149););
printStats();
void* p310 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p311 = last_address;
PRINT_POINTER(scalloc(9,18););
printStats();
void* p312 = last_address;
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(smalloc(26););
printStats();
void* p313 = last_address;
PRINT_POINTER(smalloc(65););
printStats();
void* p314 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p315 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(scalloc(58,86););
printStats();
void* p316 = last_address;
DEBUG_PRINT(sfree(p257););
printStats();
PRINT_POINTER(scalloc(209,190););
printStats();
void* p317 = last_address;
DEBUG_PRINT(sfree(p225););
printStats();
DEBUG_PRINT(sfree(p220););
printStats();
PRINT_POINTER(srealloc(p238,66););
printStats();
void* p318 = last_address;
PRINT_POINTER(srealloc(p147,2););
printStats();
void* p319 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
PRINT_POINTER(srealloc(p155,236););
printStats();
void* p320 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(scalloc(66,84););
printStats();
void* p321 = last_address;
DEBUG_PRINT(sfree(p243););
printStats();
PRINT_POINTER(smalloc(150););
printStats();
void* p322 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p323 = last_address;
PRINT_POINTER(smalloc(48););
printStats();
void* p324 = last_address;
PRINT_POINTER(scalloc(227,156););
printStats();
void* p325 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p326 = last_address;
DEBUG_PRINT(sfree(p259););
printStats();
PRINT_POINTER(srealloc(p189,113););
printStats();
void* p327 = last_address;
DEBUG_PRINT(sfree(p298););
printStats();
DEBUG_PRINT(sfree(p247););
printStats();
PRINT_POINTER(smalloc(48););
printStats();
void* p328 = last_address;
PRINT_POINTER(scalloc(167,117););
printStats();
void* p329 = last_address;
PRINT_POINTER(scalloc(71,133););
printStats();
void* p330 = last_address;
DEBUG_PRINT(sfree(p175););
printStats();
PRINT_POINTER(smalloc(124););
printStats();
void* p331 = last_address;
DEBUG_PRINT(sfree(p271););
printStats();
PRINT_POINTER(smalloc(75););
printStats();
void* p332 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p333 = last_address;
PRINT_POINTER(scalloc(17,107););
printStats();
void* p334 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p335 = last_address;
DEBUG_PRINT(sfree(p315););
printStats();
PRINT_POINTER(srealloc(p290,54););
printStats();
void* p336 = last_address;
PRINT_POINTER(srealloc(p279,163););
printStats();
void* p337 = last_address;
PRINT_POINTER(srealloc(p270,149););
printStats();
void* p338 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p339 = last_address;
PRINT_POINTER(scalloc(120,186););
printStats();
void* p340 = last_address;
DEBUG_PRINT(sfree(p330););
printStats();
PRINT_POINTER(srealloc(p152,124););
printStats();
void* p341 = last_address;
DEBUG_PRINT(sfree(p313););
printStats();
PRINT_POINTER(smalloc(238););
printStats();
void* p342 = last_address;
PRINT_POINTER(srealloc(p327,76););
printStats();
void* p343 = last_address;
PRINT_POINTER(scalloc(108,191););
printStats();
void* p344 = last_address;
DEBUG_PRINT(sfree(p341););
printStats();
DEBUG_PRINT(sfree(p274););
printStats();
DEBUG_PRINT(sfree(p309););
printStats();
PRINT_POINTER(srealloc(p112,224););
printStats();
void* p345 = last_address;
PRINT_POINTER(scalloc(118,167););
printStats();
void* p346 = last_address;
DEBUG_PRINT(sfree(p200););
printStats();
PRINT_POINTER(scalloc(65,0););
printStats();
void* p347 = last_address;
PRINT_POINTER(srealloc(p289,121););
printStats();
void* p348 = last_address;
PRINT_POINTER(smalloc(170););
printStats();
void* p349 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p350 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(srealloc(p308,170););
printStats();
void* p351 = last_address;
DEBUG_PRINT(sfree(p235););
printStats();
PRINT_POINTER(smalloc(23););
printStats();
void* p352 = last_address;
PRINT_POINTER(srealloc(p305,57););
printStats();
void* p353 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p354 = last_address;
PRINT_POINTER(srealloc(p60,49););
printStats();
void* p355 = last_address;
DEBUG_PRINT(sfree(p337););
printStats();
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(scalloc(192,212););
printStats();
void* p356 = last_address;
PRINT_POINTER(srealloc(p245,217););
printStats();
void* p357 = last_address;
PRINT_POINTER(srealloc(p344,237););
printStats();
void* p358 = last_address;
PRINT_POINTER(srealloc(p244,215););
printStats();
void* p359 = last_address;
DEBUG_PRINT(sfree(p307););
printStats();
DEBUG_PRINT(sfree(p102););
printStats();
DEBUG_PRINT(sfree(p266););
printStats();
PRINT_POINTER(smalloc(9););
printStats();
void* p360 = last_address;
PRINT_POINTER(scalloc(143,66););
printStats();
void* p361 = last_address;
PRINT_POINTER(srealloc(p179,37););
printStats();
void* p362 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p363 = last_address;
PRINT_POINTER(srealloc(p251,81););
printStats();
void* p364 = last_address;
DEBUG_PRINT(sfree(p255););
printStats();
DEBUG_PRINT(sfree(p312););
printStats();
PRINT_POINTER(scalloc(214,10););
printStats();
void* p365 = last_address;
PRINT_POINTER(scalloc(224,151););
printStats();
void* p366 = last_address;
PRINT_POINTER(scalloc(36,32););
printStats();
void* p367 = last_address;
PRINT_POINTER(scalloc(91,46););
printStats();
void* p368 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p369 = last_address;
DEBUG_PRINT(sfree(p249););
printStats();
}
