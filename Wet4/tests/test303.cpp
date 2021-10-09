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
                        PRINT_POINTER(smalloc(142););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(scalloc(46,42););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(smalloc(149););
printStats();
void* p2 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(scalloc(88,97););
printStats();
void* p3 = last_address;
PRINT_POINTER(scalloc(246,71););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p4,84););
printStats();
void* p5 = last_address;
PRINT_POINTER(scalloc(41,81););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(srealloc(p6,181););
printStats();
void* p7 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(scalloc(48,69););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(3,200););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(200););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(scalloc(77,16););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p13 = last_address;
PRINT_POINTER(smalloc(223););
printStats();
void* p14 = last_address;
PRINT_POINTER(scalloc(210,186););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(0,55););
printStats();
void* p16 = last_address;
PRINT_POINTER(srealloc(p10,245););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(smalloc(214););
printStats();
void* p18 = last_address;
PRINT_POINTER(scalloc(143,132););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(78,4););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(122,205););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(173,104););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(smalloc(36););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(81,103););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p22,102););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(146););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(smalloc(79););
printStats();
void* p27 = last_address;
PRINT_POINTER(scalloc(45,9););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(95,120););
printStats();
void* p29 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(srealloc(p12,195););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(194,100););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p19,12););
printStats();
void* p32 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(smalloc(149););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p34 = last_address;
PRINT_POINTER(scalloc(12,86););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p36 = last_address;
PRINT_POINTER(scalloc(235,103););
printStats();
void* p37 = last_address;
PRINT_POINTER(smalloc(225););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(4););
printStats();
void* p39 = last_address;
PRINT_POINTER(srealloc(p27,57););
printStats();
void* p40 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p41 = last_address;
PRINT_POINTER(smalloc(151););
printStats();
void* p42 = last_address;
PRINT_POINTER(scalloc(38,136););
printStats();
void* p43 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p44 = last_address;
PRINT_POINTER(scalloc(210,206););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p16,67););
printStats();
void* p46 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(scalloc(133,150););
printStats();
void* p47 = last_address;
PRINT_POINTER(scalloc(8,113););
printStats();
void* p48 = last_address;
PRINT_POINTER(smalloc(25););
printStats();
void* p49 = last_address;
PRINT_POINTER(srealloc(p43,186););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(179,96););
printStats();
void* p51 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(scalloc(30,248););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p33,222););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(srealloc(p17,141););
printStats();
void* p54 = last_address;
PRINT_POINTER(scalloc(80,192););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p31););
printStats();
PRINT_POINTER(srealloc(p21,210););
printStats();
void* p56 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(smalloc(248););
printStats();
void* p57 = last_address;
PRINT_POINTER(srealloc(p51,95););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(smalloc(10););
printStats();
void* p59 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(srealloc(p32,194););
printStats();
void* p60 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(srealloc(p18,177););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p47,212););
printStats();
void* p62 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(scalloc(111,243););
printStats();
void* p63 = last_address;
PRINT_POINTER(scalloc(94,163););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(199););
printStats();
void* p65 = last_address;
PRINT_POINTER(scalloc(32,122););
printStats();
void* p66 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
PRINT_POINTER(smalloc(30););
printStats();
void* p67 = last_address;
PRINT_POINTER(smalloc(139););
printStats();
void* p68 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p14,247););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p71 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(75););
printStats();
void* p73 = last_address;
PRINT_POINTER(scalloc(52,1););
printStats();
void* p74 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(scalloc(214,96););
printStats();
void* p75 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p58,87););
printStats();
void* p77 = last_address;
PRINT_POINTER(srealloc(p38,171););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(scalloc(120,73););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(srealloc(p54,245););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p72,234););
printStats();
void* p82 = last_address;
PRINT_POINTER(srealloc(p59,54););
printStats();
void* p83 = last_address;
PRINT_POINTER(smalloc(131););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(44,66););
printStats();
void* p85 = last_address;
PRINT_POINTER(srealloc(p46,43););
printStats();
void* p86 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p87 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(srealloc(p63,96););
printStats();
void* p88 = last_address;
PRINT_POINTER(scalloc(32,128););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
DEBUG_PRINT(sfree(p36););
printStats();
PRINT_POINTER(smalloc(216););
printStats();
void* p90 = last_address;
PRINT_POINTER(srealloc(p84,38););
printStats();
void* p91 = last_address;
PRINT_POINTER(smalloc(216););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(226,3););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p94 = last_address;
PRINT_POINTER(srealloc(p81,63););
printStats();
void* p95 = last_address;
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(srealloc(p37,29););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p28,159););
printStats();
void* p97 = last_address;
DEBUG_PRINT(sfree(p65););
printStats();
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(smalloc(157););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(196,137););
printStats();
void* p99 = last_address;
PRINT_POINTER(scalloc(235,111););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p87,106););
printStats();
void* p101 = last_address;
PRINT_POINTER(srealloc(p48,76););
printStats();
void* p102 = last_address;
PRINT_POINTER(srealloc(p99,241););
printStats();
void* p103 = last_address;
PRINT_POINTER(scalloc(126,229););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p44,94););
printStats();
void* p105 = last_address;
PRINT_POINTER(smalloc(64););
printStats();
void* p106 = last_address;
PRINT_POINTER(srealloc(p97,108););
printStats();
void* p107 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p82,99););
printStats();
void* p109 = last_address;
PRINT_POINTER(srealloc(p101,174););
printStats();
void* p110 = last_address;
PRINT_POINTER(scalloc(56,126););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p92););
printStats();
PRINT_POINTER(scalloc(172,24););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
DEBUG_PRINT(sfree(p104););
printStats();
DEBUG_PRINT(sfree(p53););
printStats();
PRINT_POINTER(srealloc(p78,209););
printStats();
void* p113 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(scalloc(132,211););
printStats();
void* p114 = last_address;
PRINT_POINTER(scalloc(126,109););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(4,232););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p117 = last_address;
PRINT_POINTER(srealloc(p29,105););
printStats();
void* p118 = last_address;
PRINT_POINTER(srealloc(p117,166););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(105,125););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(60,45););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p121,109););
printStats();
void* p122 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(smalloc(164););
printStats();
void* p123 = last_address;
PRINT_POINTER(srealloc(p25,227););
printStats();
void* p124 = last_address;
PRINT_POINTER(scalloc(57,173););
printStats();
void* p125 = last_address;
PRINT_POINTER(srealloc(p83,27););
printStats();
void* p126 = last_address;
DEBUG_PRINT(sfree(p88););
printStats();
PRINT_POINTER(smalloc(248););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(scalloc(237,185););
printStats();
void* p128 = last_address;
DEBUG_PRINT(sfree(p93););
printStats();
PRINT_POINTER(smalloc(133););
printStats();
void* p129 = last_address;
PRINT_POINTER(scalloc(94,243););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p131 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(148););
printStats();
void* p133 = last_address;
DEBUG_PRINT(sfree(p122););
printStats();
PRINT_POINTER(scalloc(156,110););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p112,48););
printStats();
void* p135 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p136 = last_address;
PRINT_POINTER(scalloc(48,150););
printStats();
void* p137 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p138 = last_address;
PRINT_POINTER(smalloc(73););
printStats();
void* p139 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p140 = last_address;
PRINT_POINTER(scalloc(24,155););
printStats();
void* p141 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(smalloc(192););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p108,53););
printStats();
void* p143 = last_address;
PRINT_POINTER(scalloc(137,207););
printStats();
void* p144 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p91,180););
printStats();
void* p146 = last_address;
PRINT_POINTER(scalloc(14,172););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(137,222););
printStats();
void* p148 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p149 = last_address;
PRINT_POINTER(scalloc(165,56););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(smalloc(219););
printStats();
void* p151 = last_address;
DEBUG_PRINT(sfree(p125););
printStats();
PRINT_POINTER(scalloc(40,234););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(srealloc(p56,32););
printStats();
void* p153 = last_address;
DEBUG_PRINT(sfree(p134););
printStats();
DEBUG_PRINT(sfree(p116););
printStats();
PRINT_POINTER(smalloc(94););
printStats();
void* p154 = last_address;
PRINT_POINTER(srealloc(p148,131););
printStats();
void* p155 = last_address;
PRINT_POINTER(smalloc(44););
printStats();
void* p156 = last_address;
PRINT_POINTER(smalloc(36););
printStats();
void* p157 = last_address;
PRINT_POINTER(srealloc(p140,181););
printStats();
void* p158 = last_address;
PRINT_POINTER(srealloc(p137,26););
printStats();
void* p159 = last_address;
PRINT_POINTER(scalloc(174,112););
printStats();
void* p160 = last_address;
PRINT_POINTER(scalloc(167,3););
printStats();
void* p161 = last_address;
PRINT_POINTER(scalloc(182,101););
printStats();
void* p162 = last_address;
PRINT_POINTER(scalloc(234,166););
printStats();
void* p163 = last_address;
PRINT_POINTER(scalloc(154,53););
printStats();
void* p164 = last_address;
PRINT_POINTER(srealloc(p79,84););
printStats();
void* p165 = last_address;
PRINT_POINTER(scalloc(45,70););
printStats();
void* p166 = last_address;
PRINT_POINTER(srealloc(p159,59););
printStats();
void* p167 = last_address;
PRINT_POINTER(smalloc(175););
printStats();
void* p168 = last_address;
DEBUG_PRINT(sfree(p120););
printStats();
DEBUG_PRINT(sfree(p119););
printStats();
PRINT_POINTER(smalloc(35););
printStats();
void* p169 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(srealloc(p114,23););
printStats();
void* p170 = last_address;
PRINT_POINTER(scalloc(175,162););
printStats();
void* p171 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p172 = last_address;
PRINT_POINTER(srealloc(p111,197););
printStats();
void* p173 = last_address;
PRINT_POINTER(scalloc(232,244););
printStats();
void* p174 = last_address;
PRINT_POINTER(srealloc(p118,74););
printStats();
void* p175 = last_address;
PRINT_POINTER(srealloc(p163,166););
printStats();
void* p176 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(scalloc(242,51););
printStats();
void* p177 = last_address;
PRINT_POINTER(smalloc(195););
printStats();
void* p178 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
DEBUG_PRINT(sfree(p160););
printStats();
DEBUG_PRINT(sfree(p169););
printStats();
DEBUG_PRINT(sfree(p40););
printStats();
DEBUG_PRINT(sfree(p102););
printStats();
DEBUG_PRINT(sfree(p139););
printStats();
PRINT_POINTER(srealloc(p133,94););
printStats();
void* p179 = last_address;
PRINT_POINTER(srealloc(p154,227););
printStats();
void* p180 = last_address;
PRINT_POINTER(scalloc(126,241););
printStats();
void* p181 = last_address;
DEBUG_PRINT(sfree(p170););
printStats();
DEBUG_PRINT(sfree(p129););
printStats();
PRINT_POINTER(srealloc(p71,157););
printStats();
void* p182 = last_address;
PRINT_POINTER(scalloc(35,31););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(170,216););
printStats();
void* p184 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p185 = last_address;
DEBUG_PRINT(sfree(p155););
printStats();
DEBUG_PRINT(sfree(p147););
printStats();
PRINT_POINTER(smalloc(234););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(scalloc(6,47););
printStats();
void* p187 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p188 = last_address;
PRINT_POINTER(srealloc(p157,14););
printStats();
void* p189 = last_address;
DEBUG_PRINT(sfree(p149););
printStats();
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(scalloc(236,87););
printStats();
void* p190 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p191 = last_address;
PRINT_POINTER(smalloc(180););
printStats();
void* p192 = last_address;
PRINT_POINTER(srealloc(p76,146););
printStats();
void* p193 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
PRINT_POINTER(scalloc(7,212););
printStats();
void* p194 = last_address;
PRINT_POINTER(smalloc(234););
printStats();
void* p195 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(smalloc(35););
printStats();
void* p196 = last_address;
PRINT_POINTER(srealloc(p145,94););
printStats();
void* p197 = last_address;
PRINT_POINTER(srealloc(p190,50););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p162););
printStats();
PRINT_POINTER(smalloc(124););
printStats();
void* p199 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p200 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p124););
printStats();
DEBUG_PRINT(sfree(p185););
printStats();
PRINT_POINTER(smalloc(54););
printStats();
void* p202 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p203 = last_address;
DEBUG_PRINT(sfree(p113););
printStats();
PRINT_POINTER(scalloc(235,99););
printStats();
void* p204 = last_address;
PRINT_POINTER(srealloc(p168,29););
printStats();
void* p205 = last_address;
DEBUG_PRINT(sfree(p103););
printStats();
DEBUG_PRINT(sfree(p201););
printStats();
PRINT_POINTER(srealloc(p167,242););
printStats();
void* p206 = last_address;
PRINT_POINTER(srealloc(p196,235););
printStats();
void* p207 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(smalloc(21););
printStats();
void* p208 = last_address;
PRINT_POINTER(srealloc(p186,33););
printStats();
void* p209 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p210 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(smalloc(86););
printStats();
void* p211 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(srealloc(p176,37););
printStats();
void* p212 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p213 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
DEBUG_PRINT(sfree(p210););
printStats();
PRINT_POINTER(srealloc(p35,65););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(85););
printStats();
void* p215 = last_address;
PRINT_POINTER(scalloc(73,90););
printStats();
void* p216 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(scalloc(249,245););
printStats();
void* p217 = last_address;
DEBUG_PRINT(sfree(p184););
printStats();
PRINT_POINTER(srealloc(p204,94););
printStats();
void* p218 = last_address;
PRINT_POINTER(srealloc(p200,17););
printStats();
void* p219 = last_address;
DEBUG_PRINT(sfree(p206););
printStats();
DEBUG_PRINT(sfree(p213););
printStats();
PRINT_POINTER(smalloc(241););
printStats();
void* p220 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
DEBUG_PRINT(sfree(p115););
printStats();
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(smalloc(119););
printStats();
void* p221 = last_address;
PRINT_POINTER(srealloc(p173,236););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p195,123););
printStats();
void* p223 = last_address;
PRINT_POINTER(srealloc(p141,70););
printStats();
void* p224 = last_address;
PRINT_POINTER(srealloc(p74,164););
printStats();
void* p225 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
PRINT_POINTER(scalloc(35,107););
printStats();
void* p226 = last_address;
PRINT_POINTER(scalloc(54,219););
printStats();
void* p227 = last_address;
DEBUG_PRINT(sfree(p143););
printStats();
PRINT_POINTER(scalloc(70,79););
printStats();
void* p228 = last_address;
PRINT_POINTER(scalloc(118,240););
printStats();
void* p229 = last_address;
DEBUG_PRINT(sfree(p224););
printStats();
PRINT_POINTER(scalloc(218,220););
printStats();
void* p230 = last_address;
PRINT_POINTER(scalloc(249,63););
printStats();
void* p231 = last_address;
DEBUG_PRINT(sfree(p208););
printStats();
PRINT_POINTER(smalloc(68););
printStats();
void* p232 = last_address;
PRINT_POINTER(scalloc(142,132););
printStats();
void* p233 = last_address;
PRINT_POINTER(scalloc(217,91););
printStats();
void* p234 = last_address;
PRINT_POINTER(smalloc(68););
printStats();
void* p235 = last_address;
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(srealloc(p197,226););
printStats();
void* p236 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p237 = last_address;
PRINT_POINTER(scalloc(41,166););
printStats();
void* p238 = last_address;
PRINT_POINTER(scalloc(80,4););
printStats();
void* p239 = last_address;
PRINT_POINTER(srealloc(p146,89););
printStats();
void* p240 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p241 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
PRINT_POINTER(srealloc(p142,69););
printStats();
void* p242 = last_address;
PRINT_POINTER(srealloc(p166,236););
printStats();
void* p243 = last_address;
PRINT_POINTER(scalloc(65,168););
printStats();
void* p244 = last_address;
DEBUG_PRINT(sfree(p183););
printStats();
DEBUG_PRINT(sfree(p150););
printStats();
PRINT_POINTER(smalloc(245););
printStats();
void* p245 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p246 = last_address;
DEBUG_PRINT(sfree(p244););
printStats();
PRINT_POINTER(srealloc(p217,148););
printStats();
void* p247 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p248 = last_address;
PRINT_POINTER(scalloc(177,63););
printStats();
void* p249 = last_address;
PRINT_POINTER(srealloc(p181,43););
printStats();
void* p250 = last_address;
PRINT_POINTER(smalloc(177););
printStats();
void* p251 = last_address;
PRINT_POINTER(srealloc(p222,182););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
DEBUG_PRINT(sfree(p172););
printStats();
DEBUG_PRINT(sfree(p232););
printStats();
PRINT_POINTER(scalloc(182,75););
printStats();
void* p253 = last_address;
PRINT_POINTER(scalloc(100,33););
printStats();
void* p254 = last_address;
}