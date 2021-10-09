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
                        PRINT_POINTER(scalloc(209,95););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(scalloc(203,77););
printStats();
void* p1 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(60,156););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p3,15););
printStats();
void* p4 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p5 = last_address;
PRINT_POINTER(scalloc(189,49););
printStats();
void* p6 = last_address;
PRINT_POINTER(srealloc(p5,199););
printStats();
void* p7 = last_address;
PRINT_POINTER(scalloc(59,167););
printStats();
void* p8 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(scalloc(34,124););
printStats();
void* p9 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(srealloc(p7,200););
printStats();
void* p10 = last_address;
PRINT_POINTER(srealloc(p1,39););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p13 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p15 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(srealloc(p15,9););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p11,153););
printStats();
void* p18 = last_address;
PRINT_POINTER(scalloc(213,244););
printStats();
void* p19 = last_address;
PRINT_POINTER(smalloc(168););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(smalloc(177););
printStats();
void* p21 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p22 = last_address;
PRINT_POINTER(srealloc(p20,177););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p6,68););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(178,83););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(155););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p10,244););
printStats();
void* p27 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
PRINT_POINTER(scalloc(114,230););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p13,24););
printStats();
void* p29 = last_address;
PRINT_POINTER(smalloc(115););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(85););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(193,234););
printStats();
void* p36 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p37 = last_address;
DEBUG_PRINT(sfree(p29););
printStats();
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(srealloc(p31,31););
printStats();
void* p38 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
DEBUG_PRINT(sfree(p19););
printStats();
DEBUG_PRINT(sfree(p33););
printStats();
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(101,135););
printStats();
void* p39 = last_address;
PRINT_POINTER(smalloc(120););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(scalloc(233,69););
printStats();
void* p41 = last_address;
PRINT_POINTER(srealloc(p22,142););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(smalloc(114););
printStats();
void* p43 = last_address;
PRINT_POINTER(smalloc(1););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(242););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p42,21););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(smalloc(102););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p35,103););
printStats();
void* p49 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p50 = last_address;
PRINT_POINTER(srealloc(p43,34););
printStats();
void* p51 = last_address;
PRINT_POINTER(srealloc(p48,68););
printStats();
void* p52 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(scalloc(109,181););
printStats();
void* p53 = last_address;
PRINT_POINTER(srealloc(p52,87););
printStats();
void* p54 = last_address;
PRINT_POINTER(srealloc(p26,162););
printStats();
void* p55 = last_address;
PRINT_POINTER(srealloc(p28,108););
printStats();
void* p56 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(scalloc(152,113););
printStats();
void* p57 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p58 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p32,197););
printStats();
void* p60 = last_address;
PRINT_POINTER(srealloc(p55,36););
printStats();
void* p61 = last_address;
PRINT_POINTER(scalloc(80,150););
printStats();
void* p62 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p63 = last_address;
PRINT_POINTER(smalloc(233););
printStats();
void* p64 = last_address;
PRINT_POINTER(scalloc(161,130););
printStats();
void* p65 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p51,49););
printStats();
void* p67 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(smalloc(141););
printStats();
void* p68 = last_address;
PRINT_POINTER(scalloc(61,73););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p18,196););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p65,35););
printStats();
void* p71 = last_address;
PRINT_POINTER(srealloc(p37,234););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(42););
printStats();
void* p73 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p74 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(scalloc(95,79););
printStats();
void* p75 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p27,82););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(18););
printStats();
void* p78 = last_address;
PRINT_POINTER(srealloc(p54,206););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(159,0););
printStats();
void* p80 = last_address;
PRINT_POINTER(scalloc(224,29););
printStats();
void* p81 = last_address;
DEBUG_PRINT(sfree(p63););
printStats();
PRINT_POINTER(scalloc(66,75););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(scalloc(145,5););
printStats();
void* p83 = last_address;
PRINT_POINTER(srealloc(p58,47););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(213,121););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(scalloc(54,136););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(188,145););
printStats();
void* p87 = last_address;
PRINT_POINTER(srealloc(p57,204););
printStats();
void* p88 = last_address;
DEBUG_PRINT(sfree(p83););
printStats();
PRINT_POINTER(scalloc(24,175););
printStats();
void* p89 = last_address;
PRINT_POINTER(scalloc(48,24););
printStats();
void* p90 = last_address;
PRINT_POINTER(srealloc(p90,29););
printStats();
void* p91 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(75,126););
printStats();
void* p93 = last_address;
PRINT_POINTER(scalloc(136,173););
printStats();
void* p94 = last_address;
PRINT_POINTER(scalloc(4,243););
printStats();
void* p95 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(srealloc(p76,89););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p88););
printStats();
PRINT_POINTER(srealloc(p14,244););
printStats();
void* p97 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(scalloc(230,239););
printStats();
void* p98 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(82););
printStats();
void* p100 = last_address;
PRINT_POINTER(scalloc(161,58););
printStats();
void* p101 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p103 = last_address;
PRINT_POINTER(scalloc(8,212););
printStats();
void* p104 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(scalloc(86,127););
printStats();
void* p105 = last_address;
PRINT_POINTER(srealloc(p84,184););
printStats();
void* p106 = last_address;
DEBUG_PRINT(sfree(p56););
printStats();
PRINT_POINTER(scalloc(248,59););
printStats();
void* p107 = last_address;
PRINT_POINTER(scalloc(174,56););
printStats();
void* p108 = last_address;
PRINT_POINTER(scalloc(146,156););
printStats();
void* p109 = last_address;
PRINT_POINTER(scalloc(202,161););
printStats();
void* p110 = last_address;
PRINT_POINTER(scalloc(56,129););
printStats();
void* p111 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p112 = last_address;
PRINT_POINTER(scalloc(107,80););
printStats();
void* p113 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(smalloc(44););
printStats();
void* p114 = last_address;
PRINT_POINTER(smalloc(160););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(scalloc(110,93););
printStats();
void* p116 = last_address;
PRINT_POINTER(scalloc(141,82););
printStats();
void* p117 = last_address;
PRINT_POINTER(smalloc(60););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(srealloc(p101,14););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(55,147););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(srealloc(p62,207););
printStats();
void* p121 = last_address;
PRINT_POINTER(scalloc(224,72););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(110,95););
printStats();
void* p123 = last_address;
PRINT_POINTER(srealloc(p119,15););
printStats();
void* p124 = last_address;
PRINT_POINTER(scalloc(13,92););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(smalloc(242););
printStats();
void* p126 = last_address;
PRINT_POINTER(scalloc(19,11););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(scalloc(28,196););
printStats();
void* p128 = last_address;
PRINT_POINTER(srealloc(p72,84););
printStats();
void* p129 = last_address;
PRINT_POINTER(srealloc(p98,47););
printStats();
void* p130 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(srealloc(p116,15););
printStats();
void* p131 = last_address;
PRINT_POINTER(srealloc(p47,40););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p133 = last_address;
PRINT_POINTER(srealloc(p85,190););
printStats();
void* p134 = last_address;
PRINT_POINTER(scalloc(122,84););
printStats();
void* p135 = last_address;
PRINT_POINTER(scalloc(76,9););
printStats();
void* p136 = last_address;
PRINT_POINTER(srealloc(p115,33););
printStats();
void* p137 = last_address;
PRINT_POINTER(srealloc(p75,138););
printStats();
void* p138 = last_address;
PRINT_POINTER(smalloc(195););
printStats();
void* p139 = last_address;
PRINT_POINTER(srealloc(p112,44););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(218,99););
printStats();
void* p142 = last_address;
DEBUG_PRINT(sfree(p125););
printStats();
PRINT_POINTER(smalloc(19););
printStats();
void* p143 = last_address;
PRINT_POINTER(srealloc(p137,43););
printStats();
void* p144 = last_address;
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(scalloc(236,135););
printStats();
void* p145 = last_address;
DEBUG_PRINT(sfree(p87););
printStats();
PRINT_POINTER(scalloc(2,8););
printStats();
void* p146 = last_address;
PRINT_POINTER(srealloc(p139,134););
printStats();
void* p147 = last_address;
PRINT_POINTER(srealloc(p113,107););
printStats();
void* p148 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p149 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(srealloc(p146,227););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
DEBUG_PRINT(sfree(p148););
printStats();
PRINT_POINTER(scalloc(155,47););
printStats();
void* p151 = last_address;
PRINT_POINTER(smalloc(98););
printStats();
void* p152 = last_address;
PRINT_POINTER(srealloc(p109,46););
printStats();
void* p153 = last_address;
PRINT_POINTER(scalloc(241,151););
printStats();
void* p154 = last_address;
PRINT_POINTER(srealloc(p36,52););
printStats();
void* p155 = last_address;
PRINT_POINTER(smalloc(42););
printStats();
void* p156 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p157 = last_address;
PRINT_POINTER(srealloc(p100,167););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(71,217););
printStats();
void* p159 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p160 = last_address;
PRINT_POINTER(scalloc(148,0););
printStats();
void* p161 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p162 = last_address;
PRINT_POINTER(smalloc(162););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p150););
printStats();
DEBUG_PRINT(sfree(p152););
printStats();
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(smalloc(16););
printStats();
void* p164 = last_address;
PRINT_POINTER(srealloc(p67,115););
printStats();
void* p165 = last_address;
PRINT_POINTER(srealloc(p120,184););
printStats();
void* p166 = last_address;
PRINT_POINTER(scalloc(96,194););
printStats();
void* p167 = last_address;
DEBUG_PRINT(sfree(p131););
printStats();
PRINT_POINTER(scalloc(138,71););
printStats();
void* p168 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p169 = last_address;
PRINT_POINTER(scalloc(31,126););
printStats();
void* p170 = last_address;
PRINT_POINTER(scalloc(219,45););
printStats();
void* p171 = last_address;
PRINT_POINTER(scalloc(135,142););
printStats();
void* p172 = last_address;
DEBUG_PRINT(sfree(p93););
printStats();
PRINT_POINTER(scalloc(107,86););
printStats();
void* p173 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p174 = last_address;
PRINT_POINTER(scalloc(67,31););
printStats();
void* p175 = last_address;
PRINT_POINTER(scalloc(205,70););
printStats();
void* p176 = last_address;
PRINT_POINTER(srealloc(p78,233););
printStats();
void* p177 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p178 = last_address;
PRINT_POINTER(scalloc(215,169););
printStats();
void* p179 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p180 = last_address;
DEBUG_PRINT(sfree(p129););
printStats();
PRINT_POINTER(srealloc(p156,177););
printStats();
void* p181 = last_address;
PRINT_POINTER(srealloc(p94,90););
printStats();
void* p182 = last_address;
DEBUG_PRINT(sfree(p177););
printStats();
PRINT_POINTER(smalloc(137););
printStats();
void* p183 = last_address;
PRINT_POINTER(srealloc(p181,239););
printStats();
void* p184 = last_address;
PRINT_POINTER(scalloc(173,127););
printStats();
void* p185 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(smalloc(156););
printStats();
void* p186 = last_address;
PRINT_POINTER(srealloc(p45,116););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(123,167););
printStats();
void* p188 = last_address;
DEBUG_PRINT(sfree(p186););
printStats();
PRINT_POINTER(srealloc(p178,198););
printStats();
void* p189 = last_address;
PRINT_POINTER(srealloc(p155,249););
printStats();
void* p190 = last_address;
DEBUG_PRINT(sfree(p143););
printStats();
PRINT_POINTER(scalloc(177,20););
printStats();
void* p191 = last_address;
DEBUG_PRINT(sfree(p151););
printStats();
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(smalloc(157););
printStats();
void* p192 = last_address;
DEBUG_PRINT(sfree(p108););
printStats();
DEBUG_PRINT(sfree(p158););
printStats();
PRINT_POINTER(scalloc(183,201););
printStats();
void* p193 = last_address;
PRINT_POINTER(scalloc(39,229););
printStats();
void* p194 = last_address;
PRINT_POINTER(scalloc(52,88););
printStats();
void* p195 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p196 = last_address;
PRINT_POINTER(scalloc(217,60););
printStats();
void* p197 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
DEBUG_PRINT(sfree(p162););
printStats();
PRINT_POINTER(smalloc(42););
printStats();
void* p199 = last_address;
PRINT_POINTER(smalloc(51););
printStats();
void* p200 = last_address;
PRINT_POINTER(scalloc(15,153););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p133););
printStats();
PRINT_POINTER(srealloc(p159,105););
printStats();
void* p202 = last_address;
PRINT_POINTER(smalloc(92););
printStats();
void* p203 = last_address;
PRINT_POINTER(scalloc(38,246););
printStats();
void* p204 = last_address;
PRINT_POINTER(scalloc(115,20););
printStats();
void* p205 = last_address;
PRINT_POINTER(scalloc(78,247););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(141,90););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p174,34););
printStats();
void* p208 = last_address;
PRINT_POINTER(scalloc(203,155););
printStats();
void* p209 = last_address;
PRINT_POINTER(scalloc(51,106););
printStats();
void* p210 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p209,24););
printStats();
void* p212 = last_address;
PRINT_POINTER(scalloc(175,212););
printStats();
void* p213 = last_address;
PRINT_POINTER(srealloc(p183,23););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p215 = last_address;
DEBUG_PRINT(sfree(p213););
printStats();
DEBUG_PRINT(sfree(p160););
printStats();
DEBUG_PRINT(sfree(p203););
printStats();
PRINT_POINTER(smalloc(213););
printStats();
void* p216 = last_address;
PRINT_POINTER(smalloc(184););
printStats();
void* p217 = last_address;
PRINT_POINTER(srealloc(p53,92););
printStats();
void* p218 = last_address;
DEBUG_PRINT(sfree(p179););
printStats();
PRINT_POINTER(smalloc(229););
printStats();
void* p219 = last_address;
DEBUG_PRINT(sfree(p92););
printStats();
DEBUG_PRINT(sfree(p214););
printStats();
PRINT_POINTER(smalloc(163););
printStats();
void* p220 = last_address;
PRINT_POINTER(scalloc(93,91););
printStats();
void* p221 = last_address;
DEBUG_PRINT(sfree(p188););
printStats();
PRINT_POINTER(scalloc(91,203););
printStats();
void* p222 = last_address;
PRINT_POINTER(scalloc(29,48););
printStats();
void* p223 = last_address;
PRINT_POINTER(srealloc(p104,143););
printStats();
void* p224 = last_address;
PRINT_POINTER(scalloc(184,103););
printStats();
void* p225 = last_address;
DEBUG_PRINT(sfree(p175););
printStats();
DEBUG_PRINT(sfree(p200););
printStats();
DEBUG_PRINT(sfree(p220););
printStats();
PRINT_POINTER(srealloc(p140,17););
printStats();
void* p226 = last_address;
DEBUG_PRINT(sfree(p195););
printStats();
DEBUG_PRINT(sfree(p224););
printStats();
PRINT_POINTER(scalloc(139,189););
printStats();
void* p227 = last_address;
PRINT_POINTER(scalloc(97,25););
printStats();
void* p228 = last_address;
PRINT_POINTER(srealloc(p80,135););
printStats();
void* p229 = last_address;
PRINT_POINTER(scalloc(204,230););
printStats();
void* p230 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p231 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p232 = last_address;
PRINT_POINTER(scalloc(108,144););
printStats();
void* p233 = last_address;
PRINT_POINTER(smalloc(178););
printStats();
void* p234 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(smalloc(223););
printStats();
void* p235 = last_address;
PRINT_POINTER(scalloc(109,159););
printStats();
void* p236 = last_address;
PRINT_POINTER(scalloc(150,155););
printStats();
void* p237 = last_address;
PRINT_POINTER(srealloc(p68,126););
printStats();
void* p238 = last_address;
DEBUG_PRINT(sfree(p197););
printStats();
DEBUG_PRINT(sfree(p223););
printStats();
PRINT_POINTER(smalloc(58););
printStats();
void* p239 = last_address;
PRINT_POINTER(smalloc(79););
printStats();
void* p240 = last_address;
PRINT_POINTER(scalloc(44,44););
printStats();
void* p241 = last_address;
DEBUG_PRINT(sfree(p219););
printStats();
PRINT_POINTER(smalloc(137););
printStats();
void* p242 = last_address;
PRINT_POINTER(smalloc(152););
printStats();
void* p243 = last_address;
PRINT_POINTER(scalloc(31,152););
printStats();
void* p244 = last_address;
PRINT_POINTER(scalloc(80,45););
printStats();
void* p245 = last_address;
PRINT_POINTER(srealloc(p168,242););
printStats();
void* p246 = last_address;
PRINT_POINTER(srealloc(p235,163););
printStats();
void* p247 = last_address;
DEBUG_PRINT(sfree(p222););
printStats();
PRINT_POINTER(smalloc(221););
printStats();
void* p248 = last_address;
PRINT_POINTER(srealloc(p81,134););
printStats();
void* p249 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p250 = last_address;
PRINT_POINTER(smalloc(85););
printStats();
void* p251 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(srealloc(p126,245););
printStats();
void* p252 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p253 = last_address;
PRINT_POINTER(scalloc(21,78););
printStats();
void* p254 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(srealloc(p180,63););
printStats();
void* p255 = last_address;
PRINT_POINTER(srealloc(p185,97););
printStats();
void* p256 = last_address;
PRINT_POINTER(scalloc(53,142););
printStats();
void* p257 = last_address;
PRINT_POINTER(scalloc(165,128););
printStats();
void* p258 = last_address;
PRINT_POINTER(scalloc(4,237););
printStats();
void* p259 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p260 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p261 = last_address;
DEBUG_PRINT(sfree(p122););
printStats();
DEBUG_PRINT(sfree(p225););
printStats();
DEBUG_PRINT(sfree(p241););
printStats();
DEBUG_PRINT(sfree(p212););
printStats();
PRINT_POINTER(scalloc(86,64););
printStats();
void* p262 = last_address;
DEBUG_PRINT(sfree(p166););
printStats();
DEBUG_PRINT(sfree(p206););
printStats();
PRINT_POINTER(srealloc(p191,102););
printStats();
void* p263 = last_address;
PRINT_POINTER(srealloc(p97,209););
printStats();
void* p264 = last_address;
PRINT_POINTER(smalloc(8););
printStats();
void* p265 = last_address;
DEBUG_PRINT(sfree(p217););
printStats();
PRINT_POINTER(srealloc(p24,198););
printStats();
void* p266 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(scalloc(113,18););
printStats();
void* p267 = last_address;
PRINT_POINTER(scalloc(0,13););
printStats();
void* p268 = last_address;
PRINT_POINTER(srealloc(p244,100););
printStats();
void* p269 = last_address;
PRINT_POINTER(srealloc(p198,193););
printStats();
void* p270 = last_address;
PRINT_POINTER(smalloc(217););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(136,80););
printStats();
void* p272 = last_address;
PRINT_POINTER(srealloc(p256,98););
printStats();
void* p273 = last_address;
PRINT_POINTER(scalloc(180,97););
printStats();
void* p274 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(smalloc(14););
printStats();
void* p275 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p276 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p277 = last_address;
PRINT_POINTER(scalloc(212,200););
printStats();
void* p278 = last_address;
PRINT_POINTER(srealloc(p271,235););
printStats();
void* p279 = last_address;
PRINT_POINTER(srealloc(p266,174););
printStats();
void* p280 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p281 = last_address;
PRINT_POINTER(srealloc(p102,33););
printStats();
void* p282 = last_address;
PRINT_POINTER(smalloc(114););
printStats();
void* p283 = last_address;
PRINT_POINTER(smalloc(103););
printStats();
void* p284 = last_address;
PRINT_POINTER(scalloc(238,142););
printStats();
void* p285 = last_address;
PRINT_POINTER(srealloc(p258,16););
printStats();
void* p286 = last_address;
PRINT_POINTER(smalloc(89););
printStats();
void* p287 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p288 = last_address;
PRINT_POINTER(srealloc(p251,71););
printStats();
void* p289 = last_address;
DEBUG_PRINT(sfree(p171););
printStats();
PRINT_POINTER(smalloc(199););
printStats();
void* p290 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p291 = last_address;
DEBUG_PRINT(sfree(p202););
printStats();
PRINT_POINTER(srealloc(p189,128););
printStats();
void* p292 = last_address;
DEBUG_PRINT(sfree(p257););
printStats();
PRINT_POINTER(srealloc(p184,247););
printStats();
void* p293 = last_address;
PRINT_POINTER(srealloc(p289,138););
printStats();
void* p294 = last_address;
DEBUG_PRINT(sfree(p255););
printStats();
PRINT_POINTER(scalloc(59,21););
printStats();
void* p295 = last_address;
PRINT_POINTER(srealloc(p114,183););
printStats();
void* p296 = last_address;
PRINT_POINTER(srealloc(p238,186););
printStats();
void* p297 = last_address;
PRINT_POINTER(srealloc(p138,249););
printStats();
void* p298 = last_address;
PRINT_POINTER(srealloc(p294,84););
printStats();
void* p299 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
PRINT_POINTER(smalloc(235););
printStats();
void* p300 = last_address;
PRINT_POINTER(smalloc(5););
printStats();
void* p301 = last_address;
DEBUG_PRINT(sfree(p249););
printStats();
PRINT_POINTER(smalloc(205););
printStats();
void* p302 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p303 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
PRINT_POINTER(srealloc(p300,46););
printStats();
void* p304 = last_address;
PRINT_POINTER(srealloc(p246,130););
printStats();
void* p305 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p306 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p307 = last_address;
DEBUG_PRINT(sfree(p170););
printStats();
DEBUG_PRINT(sfree(p292););
printStats();
DEBUG_PRINT(sfree(p208););
printStats();
DEBUG_PRINT(sfree(p306););
printStats();
PRINT_POINTER(srealloc(p304,10););
printStats();
void* p308 = last_address;
PRINT_POINTER(scalloc(204,152););
printStats();
void* p309 = last_address;
DEBUG_PRINT(sfree(p267););
printStats();
PRINT_POINTER(srealloc(p254,7););
printStats();
void* p310 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(smalloc(186););
printStats();
void* p311 = last_address;
PRINT_POINTER(smalloc(54););
printStats();
void* p312 = last_address;
PRINT_POINTER(srealloc(p308,72););
printStats();
void* p313 = last_address;
PRINT_POINTER(smalloc(109););
printStats();
void* p314 = last_address;
PRINT_POINTER(scalloc(229,45););
printStats();
void* p315 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p316 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
DEBUG_PRINT(sfree(p297););
printStats();
PRINT_POINTER(srealloc(p71,17););
printStats();
void* p317 = last_address;
DEBUG_PRINT(sfree(p296););
printStats();
PRINT_POINTER(scalloc(47,36););
printStats();
void* p318 = last_address;
PRINT_POINTER(srealloc(p313,225););
printStats();
void* p319 = last_address;
DEBUG_PRINT(sfree(p229););
printStats();
PRINT_POINTER(smalloc(81););
printStats();
void* p320 = last_address;
DEBUG_PRINT(sfree(p260););
printStats();
PRINT_POINTER(srealloc(p265,165););
printStats();
void* p321 = last_address;
PRINT_POINTER(smalloc(102););
printStats();
void* p322 = last_address;
PRINT_POINTER(srealloc(p302,32););
printStats();
void* p323 = last_address;
PRINT_POINTER(srealloc(p136,38););
printStats();
void* p324 = last_address;
PRINT_POINTER(srealloc(p234,192););
printStats();
void* p325 = last_address;
PRINT_POINTER(scalloc(161,189););
printStats();
void* p326 = last_address;
PRINT_POINTER(scalloc(199,235););
printStats();
void* p327 = last_address;
PRINT_POINTER(smalloc(223););
printStats();
void* p328 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
PRINT_POINTER(scalloc(95,84););
printStats();
void* p329 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p330 = last_address;
DEBUG_PRINT(sfree(p321););
printStats();
DEBUG_PRINT(sfree(p193););
printStats();
PRINT_POINTER(srealloc(p247,142););
printStats();
void* p331 = last_address;
PRINT_POINTER(scalloc(178,69););
printStats();
void* p332 = last_address;
PRINT_POINTER(srealloc(p176,209););
printStats();
void* p333 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p334 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p335 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p336 = last_address;
PRINT_POINTER(scalloc(76,165););
printStats();
void* p337 = last_address;
PRINT_POINTER(srealloc(p268,248););
printStats();
void* p338 = last_address;
PRINT_POINTER(scalloc(152,186););
printStats();
void* p339 = last_address;
PRINT_POINTER(srealloc(p290,6););
printStats();
void* p340 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p341 = last_address;
PRINT_POINTER(srealloc(p315,51););
printStats();
void* p342 = last_address;
PRINT_POINTER(scalloc(91,216););
printStats();
void* p343 = last_address;
PRINT_POINTER(scalloc(229,96););
printStats();
void* p344 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p345 = last_address;
PRINT_POINTER(scalloc(180,97););
printStats();
void* p346 = last_address;
PRINT_POINTER(srealloc(p298,247););
printStats();
void* p347 = last_address;
DEBUG_PRINT(sfree(p201););
printStats();
PRINT_POINTER(smalloc(204););
printStats();
void* p348 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p349 = last_address;
PRINT_POINTER(scalloc(80,67););
printStats();
void* p350 = last_address;
PRINT_POINTER(smalloc(218););
printStats();
void* p351 = last_address;
DEBUG_PRINT(sfree(p288););
printStats();
PRINT_POINTER(smalloc(62););
printStats();
void* p352 = last_address;
PRINT_POINTER(scalloc(150,49););
printStats();
void* p353 = last_address;
PRINT_POINTER(scalloc(248,185););
printStats();
void* p354 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p355 = last_address;
DEBUG_PRINT(sfree(p273););
printStats();
DEBUG_PRINT(sfree(p293););
printStats();
PRINT_POINTER(srealloc(p210,67););
printStats();
void* p356 = last_address;
DEBUG_PRINT(sfree(p343););
printStats();
PRINT_POINTER(smalloc(161););
printStats();
void* p357 = last_address;
PRINT_POINTER(srealloc(p327,2););
printStats();
void* p358 = last_address;
DEBUG_PRINT(sfree(p263););
printStats();
PRINT_POINTER(srealloc(p352,243););
printStats();
void* p359 = last_address;
PRINT_POINTER(smalloc(159););
printStats();
void* p360 = last_address;
PRINT_POINTER(scalloc(22,190););
printStats();
void* p361 = last_address;
PRINT_POINTER(smalloc(204););
printStats();
void* p362 = last_address;
DEBUG_PRINT(sfree(p149););
printStats();
PRINT_POINTER(smalloc(83););
printStats();
void* p363 = last_address;
PRINT_POINTER(srealloc(p211,195););
printStats();
void* p364 = last_address;
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(scalloc(66,150););
printStats();
void* p365 = last_address;
PRINT_POINTER(srealloc(p130,249););
printStats();
void* p366 = last_address;
PRINT_POINTER(scalloc(245,190););
printStats();
void* p367 = last_address;
DEBUG_PRINT(sfree(p231););
printStats();
PRINT_POINTER(scalloc(86,201););
printStats();
void* p368 = last_address;
PRINT_POINTER(srealloc(p341,10););
printStats();
void* p369 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(srealloc(p281,102););
printStats();
void* p370 = last_address;
PRINT_POINTER(smalloc(152););
printStats();
void* p371 = last_address;
DEBUG_PRINT(sfree(p243););
printStats();
PRINT_POINTER(smalloc(193););
printStats();
void* p372 = last_address;
PRINT_POINTER(srealloc(p261,99););
printStats();
void* p373 = last_address;
DEBUG_PRINT(sfree(p344););
printStats();
PRINT_POINTER(srealloc(p282,48););
printStats();
void* p374 = last_address;
DEBUG_PRINT(sfree(p233););
printStats();
DEBUG_PRINT(sfree(p145););
printStats();
PRINT_POINTER(scalloc(106,82););
printStats();
void* p375 = last_address;
DEBUG_PRINT(sfree(p335););
printStats();
PRINT_POINTER(scalloc(144,79););
printStats();
void* p376 = last_address;
PRINT_POINTER(scalloc(130,161););
printStats();
void* p377 = last_address;
PRINT_POINTER(scalloc(180,90););
printStats();
void* p378 = last_address;
DEBUG_PRINT(sfree(p367););
printStats();
PRINT_POINTER(smalloc(248););
printStats();
void* p379 = last_address;
DEBUG_PRINT(sfree(p339););
printStats();
DEBUG_PRINT(sfree(p287););
printStats();
PRINT_POINTER(scalloc(96,145););
printStats();
void* p380 = last_address;
PRINT_POINTER(scalloc(172,149););
printStats();
void* p381 = last_address;
PRINT_POINTER(scalloc(137,210););
printStats();
void* p382 = last_address;
DEBUG_PRINT(sfree(p363););
printStats();
DEBUG_PRINT(sfree(p227););
printStats();
PRINT_POINTER(smalloc(19););
printStats();
void* p383 = last_address;
PRINT_POINTER(scalloc(222,108););
printStats();
void* p384 = last_address;
DEBUG_PRINT(sfree(p359););
printStats();
PRINT_POINTER(scalloc(10,183););
printStats();
void* p385 = last_address;
DEBUG_PRINT(sfree(p221););
printStats();
PRINT_POINTER(scalloc(242,140););
printStats();
void* p386 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p387 = last_address;
PRINT_POINTER(scalloc(41,60););
printStats();
void* p388 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
DEBUG_PRINT(sfree(p204););
printStats();
PRINT_POINTER(scalloc(163,245););
printStats();
void* p389 = last_address;
DEBUG_PRINT(sfree(p376););
printStats();
PRINT_POINTER(srealloc(p374,154););
printStats();
void* p390 = last_address;
DEBUG_PRINT(sfree(p163););
printStats();
PRINT_POINTER(srealloc(p365,182););
printStats();
void* p391 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p392 = last_address;
DEBUG_PRINT(sfree(p105););
printStats();
PRINT_POINTER(smalloc(94););
printStats();
void* p393 = last_address;
PRINT_POINTER(srealloc(p338,24););
printStats();
void* p394 = last_address;
PRINT_POINTER(scalloc(156,191););
printStats();
void* p395 = last_address;
PRINT_POINTER(scalloc(216,87););
printStats();
void* p396 = last_address;
PRINT_POINTER(srealloc(p351,92););
printStats();
void* p397 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p398 = last_address;
PRINT_POINTER(smalloc(126););
printStats();
void* p399 = last_address;
DEBUG_PRINT(sfree(p364););
printStats();
DEBUG_PRINT(sfree(p291););
printStats();
PRINT_POINTER(scalloc(210,75););
printStats();
void* p400 = last_address;
PRINT_POINTER(scalloc(79,64););
printStats();
void* p401 = last_address;
PRINT_POINTER(srealloc(p275,217););
printStats();
void* p402 = last_address;
DEBUG_PRINT(sfree(p215););
printStats();
PRINT_POINTER(smalloc(179););
printStats();
void* p403 = last_address;
PRINT_POINTER(srealloc(p259,133););
printStats();
void* p404 = last_address;
PRINT_POINTER(scalloc(97,88););
printStats();
void* p405 = last_address;
PRINT_POINTER(smalloc(108););
printStats();
void* p406 = last_address;
DEBUG_PRINT(sfree(p326););
printStats();
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(srealloc(p353,174););
printStats();
void* p407 = last_address;
PRINT_POINTER(srealloc(p337,167););
printStats();
void* p408 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p409 = last_address;
}
