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
                        PRINT_POINTER(scalloc(177,122););
printStats();
void* p0 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p1 = last_address;
PRINT_POINTER(srealloc(p0,65););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(165,160););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p1,4););
printStats();
void* p4 = last_address;
PRINT_POINTER(smalloc(57););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p5,83););
printStats();
void* p6 = last_address;
PRINT_POINTER(srealloc(p4,99););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p2,202););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(39,38););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(136););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(smalloc(243););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p7,242););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(151););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(106,188););
printStats();
void* p14 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(scalloc(77,242););
printStats();
void* p15 = last_address;
PRINT_POINTER(srealloc(p6,116););
printStats();
void* p16 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(srealloc(p14,162););
printStats();
void* p17 = last_address;
PRINT_POINTER(smalloc(29););
printStats();
void* p18 = last_address;
PRINT_POINTER(scalloc(82,184););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(28,12););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(smalloc(131););
printStats();
void* p21 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p22 = last_address;
PRINT_POINTER(srealloc(p10,119););
printStats();
void* p23 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(189,105););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p17,102););
printStats();
void* p27 = last_address;
DEBUG_PRINT(sfree(p24););
printStats();
PRINT_POINTER(srealloc(p19,4););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(80,89););
printStats();
void* p29 = last_address;
PRINT_POINTER(scalloc(179,226););
printStats();
void* p30 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
PRINT_POINTER(scalloc(175,17););
printStats();
void* p31 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(144,51););
printStats();
void* p32 = last_address;
PRINT_POINTER(scalloc(67,125););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(222,197););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(115););
printStats();
void* p35 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(smalloc(42););
printStats();
void* p36 = last_address;
PRINT_POINTER(scalloc(48,80););
printStats();
void* p37 = last_address;
PRINT_POINTER(smalloc(10););
printStats();
void* p38 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(scalloc(135,142););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(59,234););
printStats();
void* p40 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(102,178););
printStats();
void* p42 = last_address;
PRINT_POINTER(srealloc(p15,91););
printStats();
void* p43 = last_address;
PRINT_POINTER(srealloc(p27,42););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p13,107););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p26,63););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(scalloc(219,107););
printStats();
void* p48 = last_address;
PRINT_POINTER(scalloc(186,24););
printStats();
void* p49 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p50 = last_address;
PRINT_POINTER(srealloc(p45,237););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(118,209););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(179,12););
printStats();
void* p53 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p54 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(smalloc(133););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(srealloc(p25,71););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(197,120););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(scalloc(222,21););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
DEBUG_PRINT(sfree(p29););
printStats();
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(smalloc(63););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p47,30););
printStats();
void* p60 = last_address;
PRINT_POINTER(srealloc(p33,240););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p57,83););
printStats();
void* p62 = last_address;
PRINT_POINTER(srealloc(p16,70););
printStats();
void* p63 = last_address;
DEBUG_PRINT(sfree(p58););
printStats();
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(94););
printStats();
void* p64 = last_address;
PRINT_POINTER(scalloc(39,195););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p34,243););
printStats();
void* p66 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(smalloc(94););
printStats();
void* p67 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(scalloc(186,101););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p31,132););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(167););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(3,105););
printStats();
void* p72 = last_address;
PRINT_POINTER(srealloc(p43,49););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p42,17););
printStats();
void* p74 = last_address;
PRINT_POINTER(scalloc(73,15););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(229,103););
printStats();
void* p76 = last_address;
PRINT_POINTER(smalloc(170););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(205););
printStats();
void* p78 = last_address;
PRINT_POINTER(scalloc(194,169););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(scalloc(127,98););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p81 = last_address;
PRINT_POINTER(scalloc(74,189););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p83 = last_address;
PRINT_POINTER(smalloc(42););
printStats();
void* p84 = last_address;
PRINT_POINTER(srealloc(p51,167););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(scalloc(238,216););
printStats();
void* p86 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(scalloc(63,235););
printStats();
void* p87 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
PRINT_POINTER(srealloc(p84,197););
printStats();
void* p88 = last_address;
PRINT_POINTER(scalloc(156,64););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(srealloc(p88,153););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(srealloc(p53,150););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(141,219););
printStats();
void* p93 = last_address;
PRINT_POINTER(srealloc(p93,21););
printStats();
void* p94 = last_address;
PRINT_POINTER(scalloc(210,121););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p92,168););
printStats();
void* p96 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p97 = last_address;
PRINT_POINTER(scalloc(12,90););
printStats();
void* p98 = last_address;
PRINT_POINTER(smalloc(105););
printStats();
void* p99 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(smalloc(9););
printStats();
void* p100 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(smalloc(104););
printStats();
void* p101 = last_address;
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(srealloc(p36,163););
printStats();
void* p102 = last_address;
PRINT_POINTER(scalloc(68,207););
printStats();
void* p103 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p99,195););
printStats();
void* p105 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
DEBUG_PRINT(sfree(p105););
printStats();
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(srealloc(p76,153););
printStats();
void* p106 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p107 = last_address;
PRINT_POINTER(scalloc(169,126););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p95,151););
printStats();
void* p109 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p63,46););
printStats();
void* p112 = last_address;
PRINT_POINTER(srealloc(p72,7););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(54););
printStats();
void* p114 = last_address;
PRINT_POINTER(scalloc(76,179););
printStats();
void* p115 = last_address;
PRINT_POINTER(smalloc(35););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p117 = last_address;
PRINT_POINTER(scalloc(11,219););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p83););
printStats();
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(scalloc(114,189););
printStats();
void* p119 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
PRINT_POINTER(srealloc(p48,120););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(srealloc(p80,43););
printStats();
void* p121 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(scalloc(147,17););
printStats();
void* p122 = last_address;
PRINT_POINTER(srealloc(p71,83););
printStats();
void* p123 = last_address;
DEBUG_PRINT(sfree(p102););
printStats();
PRINT_POINTER(scalloc(133,80););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(srealloc(p74,59););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(scalloc(236,182););
printStats();
void* p126 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(smalloc(145););
printStats();
void* p127 = last_address;
PRINT_POINTER(smalloc(199););
printStats();
void* p128 = last_address;
PRINT_POINTER(srealloc(p56,86););
printStats();
void* p129 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(srealloc(p81,200););
printStats();
void* p130 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
DEBUG_PRINT(sfree(p106););
printStats();
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(scalloc(162,182););
printStats();
void* p131 = last_address;
PRINT_POINTER(srealloc(p129,119););
printStats();
void* p132 = last_address;
PRINT_POINTER(scalloc(231,215););
printStats();
void* p133 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
DEBUG_PRINT(sfree(p113););
printStats();
PRINT_POINTER(smalloc(2););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(srealloc(p85,109););
printStats();
void* p135 = last_address;
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(scalloc(221,222););
printStats();
void* p136 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(scalloc(223,210););
printStats();
void* p137 = last_address;
PRINT_POINTER(scalloc(118,209););
printStats();
void* p138 = last_address;
PRINT_POINTER(scalloc(235,101););
printStats();
void* p139 = last_address;
DEBUG_PRINT(sfree(p115););
printStats();
DEBUG_PRINT(sfree(p52););
printStats();
DEBUG_PRINT(sfree(p109););
printStats();
DEBUG_PRINT(sfree(p65););
printStats();
PRINT_POINTER(smalloc(157););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p141 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(srealloc(p110,47););
printStats();
void* p142 = last_address;
PRINT_POINTER(scalloc(125,171););
printStats();
void* p143 = last_address;
PRINT_POINTER(scalloc(210,179););
printStats();
void* p144 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p145 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(smalloc(120););
printStats();
void* p146 = last_address;
PRINT_POINTER(scalloc(28,50););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(151,32););
printStats();
void* p148 = last_address;
PRINT_POINTER(srealloc(p133,51););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p125,208););
printStats();
void* p150 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p151 = last_address;
PRINT_POINTER(scalloc(212,228););
printStats();
void* p152 = last_address;
PRINT_POINTER(srealloc(p22,80););
printStats();
void* p153 = last_address;
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(scalloc(217,63););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p155 = last_address;
DEBUG_PRINT(sfree(p150););
printStats();
PRINT_POINTER(srealloc(p149,97););
printStats();
void* p156 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
PRINT_POINTER(srealloc(p130,215););
printStats();
void* p157 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
DEBUG_PRINT(sfree(p154););
printStats();
PRINT_POINTER(srealloc(p157,197););
printStats();
void* p158 = last_address;
DEBUG_PRINT(sfree(p151););
printStats();
PRINT_POINTER(smalloc(14););
printStats();
void* p159 = last_address;
PRINT_POINTER(scalloc(38,142););
printStats();
void* p160 = last_address;
PRINT_POINTER(scalloc(5,174););
printStats();
void* p161 = last_address;
PRINT_POINTER(srealloc(p79,181););
printStats();
void* p162 = last_address;
PRINT_POINTER(scalloc(2,134););
printStats();
void* p163 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p143););
printStats();
DEBUG_PRINT(sfree(p87););
printStats();
DEBUG_PRINT(sfree(p134););
printStats();
PRINT_POINTER(smalloc(185););
printStats();
void* p165 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(scalloc(63,103););
printStats();
void* p166 = last_address;
PRINT_POINTER(smalloc(75););
printStats();
void* p167 = last_address;
PRINT_POINTER(srealloc(p163,100););
printStats();
void* p168 = last_address;
DEBUG_PRINT(sfree(p166););
printStats();
PRINT_POINTER(scalloc(179,5););
printStats();
void* p169 = last_address;
PRINT_POINTER(srealloc(p126,50););
printStats();
void* p170 = last_address;
PRINT_POINTER(smalloc(143););
printStats();
void* p171 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(srealloc(p91,237););
printStats();
void* p172 = last_address;
PRINT_POINTER(scalloc(249,208););
printStats();
void* p173 = last_address;
DEBUG_PRINT(sfree(p158););
printStats();
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(smalloc(117););
printStats();
void* p174 = last_address;
DEBUG_PRINT(sfree(p164););
printStats();
PRINT_POINTER(scalloc(72,204););
printStats();
void* p175 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p176 = last_address;
PRINT_POINTER(srealloc(p156,43););
printStats();
void* p177 = last_address;
PRINT_POINTER(scalloc(18,148););
printStats();
void* p178 = last_address;
PRINT_POINTER(smalloc(192););
printStats();
void* p179 = last_address;
PRINT_POINTER(srealloc(p131,128););
printStats();
void* p180 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
PRINT_POINTER(scalloc(203,156););
printStats();
void* p181 = last_address;
PRINT_POINTER(scalloc(68,234););
printStats();
void* p182 = last_address;
PRINT_POINTER(srealloc(p62,119););
printStats();
void* p183 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p184 = last_address;
PRINT_POINTER(srealloc(p161,137););
printStats();
void* p185 = last_address;
DEBUG_PRINT(sfree(p167););
printStats();
DEBUG_PRINT(sfree(p179););
printStats();
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(smalloc(48););
printStats();
void* p186 = last_address;
DEBUG_PRINT(sfree(p146););
printStats();
PRINT_POINTER(srealloc(p181,192););
printStats();
void* p187 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(smalloc(88););
printStats();
void* p188 = last_address;
PRINT_POINTER(scalloc(191,174););
printStats();
void* p189 = last_address;
PRINT_POINTER(smalloc(248););
printStats();
void* p190 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p191 = last_address;
PRINT_POINTER(smalloc(219););
printStats();
void* p192 = last_address;
PRINT_POINTER(srealloc(p145,32););
printStats();
void* p193 = last_address;
PRINT_POINTER(scalloc(47,209););
printStats();
void* p194 = last_address;
PRINT_POINTER(srealloc(p96,98););
printStats();
void* p195 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p196 = last_address;
PRINT_POINTER(scalloc(189,73););
printStats();
void* p197 = last_address;
PRINT_POINTER(scalloc(25,203););
printStats();
void* p198 = last_address;
PRINT_POINTER(smalloc(169););
printStats();
void* p199 = last_address;
PRINT_POINTER(scalloc(41,197););
printStats();
void* p200 = last_address;
DEBUG_PRINT(sfree(p139););
printStats();
DEBUG_PRINT(sfree(p174););
printStats();
DEBUG_PRINT(sfree(p193););
printStats();
PRINT_POINTER(scalloc(201,114););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
DEBUG_PRINT(sfree(p119););
printStats();
PRINT_POINTER(srealloc(p108,134););
printStats();
void* p202 = last_address;
PRINT_POINTER(scalloc(198,90););
printStats();
void* p203 = last_address;
PRINT_POINTER(srealloc(p168,222););
printStats();
void* p204 = last_address;
PRINT_POINTER(scalloc(219,173););
printStats();
void* p205 = last_address;
PRINT_POINTER(scalloc(80,17););
printStats();
void* p206 = last_address;
PRINT_POINTER(smalloc(242););
printStats();
void* p207 = last_address;
PRINT_POINTER(scalloc(154,178););
printStats();
void* p208 = last_address;
PRINT_POINTER(srealloc(p170,209););
printStats();
void* p209 = last_address;
PRINT_POINTER(srealloc(p189,244););
printStats();
void* p210 = last_address;
PRINT_POINTER(srealloc(p190,146););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p204,157););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(srealloc(p103,69););
printStats();
void* p213 = last_address;
DEBUG_PRINT(sfree(p207););
printStats();
PRINT_POINTER(smalloc(110););
printStats();
void* p214 = last_address;
PRINT_POINTER(scalloc(26,229););
printStats();
void* p215 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
PRINT_POINTER(scalloc(133,76););
printStats();
void* p216 = last_address;
PRINT_POINTER(srealloc(p180,162););
printStats();
void* p217 = last_address;
PRINT_POINTER(smalloc(41););
printStats();
void* p218 = last_address;
PRINT_POINTER(scalloc(80,55););
printStats();
void* p219 = last_address;
DEBUG_PRINT(sfree(p192););
printStats();
DEBUG_PRINT(sfree(p200););
printStats();
PRINT_POINTER(smalloc(207););
printStats();
void* p220 = last_address;
PRINT_POINTER(smalloc(125););
printStats();
void* p221 = last_address;
PRINT_POINTER(smalloc(204););
printStats();
void* p222 = last_address;
PRINT_POINTER(scalloc(162,7););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
PRINT_POINTER(scalloc(145,67););
printStats();
void* p224 = last_address;
PRINT_POINTER(scalloc(70,230););
printStats();
void* p225 = last_address;
PRINT_POINTER(srealloc(p215,146););
printStats();
void* p226 = last_address;
PRINT_POINTER(smalloc(90););
printStats();
void* p227 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(smalloc(100););
printStats();
void* p228 = last_address;
PRINT_POINTER(srealloc(p214,87););
printStats();
void* p229 = last_address;
DEBUG_PRINT(sfree(p176););
printStats();
PRINT_POINTER(scalloc(16,84););
printStats();
void* p230 = last_address;
PRINT_POINTER(scalloc(136,231););
printStats();
void* p231 = last_address;
PRINT_POINTER(scalloc(179,4););
printStats();
void* p232 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p233 = last_address;
PRINT_POINTER(scalloc(182,105););
printStats();
void* p234 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p235 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(smalloc(75););
printStats();
void* p236 = last_address;
PRINT_POINTER(scalloc(193,57););
printStats();
void* p237 = last_address;
PRINT_POINTER(srealloc(p217,217););
printStats();
void* p238 = last_address;
DEBUG_PRINT(sfree(p173););
printStats();
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(srealloc(p178,52););
printStats();
void* p239 = last_address;
PRINT_POINTER(srealloc(p224,85););
printStats();
void* p240 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p241 = last_address;
DEBUG_PRINT(sfree(p186););
printStats();
PRINT_POINTER(srealloc(p237,202););
printStats();
void* p242 = last_address;
PRINT_POINTER(srealloc(p171,21););
printStats();
void* p243 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p244 = last_address;
DEBUG_PRINT(sfree(p227););
printStats();
DEBUG_PRINT(sfree(p226););
printStats();
PRINT_POINTER(scalloc(129,21););
printStats();
void* p245 = last_address;
PRINT_POINTER(srealloc(p234,190););
printStats();
void* p246 = last_address;
PRINT_POINTER(srealloc(p221,243););
printStats();
void* p247 = last_address;
PRINT_POINTER(smalloc(217););
printStats();
void* p248 = last_address;
DEBUG_PRINT(sfree(p210););
printStats();
PRINT_POINTER(srealloc(p122,46););
printStats();
void* p249 = last_address;
PRINT_POINTER(srealloc(p243,99););
printStats();
void* p250 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p251 = last_address;
PRINT_POINTER(srealloc(p236,84););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p230););
printStats();
PRINT_POINTER(scalloc(151,160););
printStats();
void* p253 = last_address;
PRINT_POINTER(smalloc(75););
printStats();
void* p254 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p255 = last_address;
DEBUG_PRINT(sfree(p255););
printStats();
PRINT_POINTER(srealloc(p202,59););
printStats();
void* p256 = last_address;
PRINT_POINTER(srealloc(p208,48););
printStats();
void* p257 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p258 = last_address;
PRINT_POINTER(scalloc(15,224););
printStats();
void* p259 = last_address;
DEBUG_PRINT(sfree(p231););
printStats();
PRINT_POINTER(smalloc(10););
printStats();
void* p260 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p261 = last_address;
PRINT_POINTER(scalloc(201,131););
printStats();
void* p262 = last_address;
PRINT_POINTER(srealloc(p241,186););
printStats();
void* p263 = last_address;
PRINT_POINTER(srealloc(p141,106););
printStats();
void* p264 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p265 = last_address;
DEBUG_PRINT(sfree(p252););
printStats();
DEBUG_PRINT(sfree(p232););
printStats();
DEBUG_PRINT(sfree(p225););
printStats();
PRINT_POINTER(scalloc(181,104););
printStats();
void* p266 = last_address;
PRINT_POINTER(scalloc(228,203););
printStats();
void* p267 = last_address;
PRINT_POINTER(smalloc(75););
printStats();
void* p268 = last_address;
PRINT_POINTER(scalloc(68,16););
printStats();
void* p269 = last_address;
DEBUG_PRINT(sfree(p244););
printStats();
PRINT_POINTER(srealloc(p233,249););
printStats();
void* p270 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(67,90););
printStats();
void* p272 = last_address;
DEBUG_PRINT(sfree(p249););
printStats();
PRINT_POINTER(srealloc(p201,15););
printStats();
void* p273 = last_address;
PRINT_POINTER(smalloc(25););
printStats();
void* p274 = last_address;
PRINT_POINTER(srealloc(p228,69););
printStats();
void* p275 = last_address;
PRINT_POINTER(scalloc(51,13););
printStats();
void* p276 = last_address;
PRINT_POINTER(srealloc(p195,183););
printStats();
void* p277 = last_address;
PRINT_POINTER(srealloc(p216,248););
printStats();
void* p278 = last_address;
PRINT_POINTER(scalloc(80,77););
printStats();
void* p279 = last_address;
PRINT_POINTER(scalloc(124,85););
printStats();
void* p280 = last_address;
PRINT_POINTER(srealloc(p229,109););
printStats();
void* p281 = last_address;
DEBUG_PRINT(sfree(p248););
printStats();
PRINT_POINTER(smalloc(35););
printStats();
void* p282 = last_address;
PRINT_POINTER(scalloc(59,100););
printStats();
void* p283 = last_address;
PRINT_POINTER(smalloc(185););
printStats();
void* p284 = last_address;
PRINT_POINTER(smalloc(213););
printStats();
void* p285 = last_address;
PRINT_POINTER(srealloc(p284,186););
printStats();
void* p286 = last_address;
DEBUG_PRINT(sfree(p286););
printStats();
DEBUG_PRINT(sfree(p246););
printStats();
PRINT_POINTER(srealloc(p280,70););
printStats();
void* p287 = last_address;
PRINT_POINTER(scalloc(136,71););
printStats();
void* p288 = last_address;
}
