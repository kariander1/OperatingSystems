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
                        PRINT_POINTER(smalloc(110););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(scalloc(113,89););
printStats();
void* p1 = last_address;
PRINT_POINTER(smalloc(195););
printStats();
void* p2 = last_address;
PRINT_POINTER(srealloc(p2,35););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p1,227););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p4,138););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p3,205););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(smalloc(28););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(21););
printStats();
void* p8 = last_address;
PRINT_POINTER(srealloc(p8,171););
printStats();
void* p9 = last_address;
PRINT_POINTER(srealloc(p7,102););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(scalloc(186,194););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p11,3););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p13 = last_address;
DEBUG_PRINT(sfree(p10););
printStats();
PRINT_POINTER(srealloc(p12,166););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(14););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(34,93););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(scalloc(84,74););
printStats();
void* p18 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(smalloc(12););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(63,217););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(scalloc(202,200););
printStats();
void* p21 = last_address;
PRINT_POINTER(srealloc(p17,209););
printStats();
void* p22 = last_address;
PRINT_POINTER(smalloc(105););
printStats();
void* p23 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(srealloc(p22,104););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p21,87););
printStats();
void* p25 = last_address;
PRINT_POINTER(srealloc(p16,47););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p24););
printStats();
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(scalloc(63,149););
printStats();
void* p27 = last_address;
DEBUG_PRINT(sfree(p19););
printStats();
PRINT_POINTER(scalloc(85,244););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p25,132););
printStats();
void* p29 = last_address;
PRINT_POINTER(srealloc(p26,133););
printStats();
void* p30 = last_address;
PRINT_POINTER(srealloc(p23,95););
printStats();
void* p31 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
PRINT_POINTER(scalloc(31,182););
printStats();
void* p32 = last_address;
PRINT_POINTER(srealloc(p30,126););
printStats();
void* p33 = last_address;
PRINT_POINTER(srealloc(p32,211););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(170););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(131););
printStats();
void* p36 = last_address;
PRINT_POINTER(scalloc(107,90););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(163,226););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p39 = last_address;
PRINT_POINTER(srealloc(p31,243););
printStats();
void* p40 = last_address;
PRINT_POINTER(scalloc(221,220););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(203,18););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(scalloc(63,177););
printStats();
void* p43 = last_address;
PRINT_POINTER(srealloc(p27,107););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p42,123););
printStats();
void* p45 = last_address;
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(scalloc(1,54););
printStats();
void* p46 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(smalloc(117););
printStats();
void* p47 = last_address;
PRINT_POINTER(scalloc(191,114););
printStats();
void* p48 = last_address;
DEBUG_PRINT(sfree(p47););
printStats();
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(srealloc(p43,58););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(scalloc(217,40););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(244,44););
printStats();
void* p51 = last_address;
PRINT_POINTER(srealloc(p48,152););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(162,36););
printStats();
void* p53 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(scalloc(161,238););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(83,41););
printStats();
void* p57 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(scalloc(237,139););
printStats();
void* p58 = last_address;
PRINT_POINTER(scalloc(201,67););
printStats();
void* p59 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(scalloc(20,26););
printStats();
void* p60 = last_address;
PRINT_POINTER(srealloc(p38,159););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p52,214););
printStats();
void* p62 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
PRINT_POINTER(scalloc(238,93););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p29,196););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(smalloc(204););
printStats();
void* p65 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
DEBUG_PRINT(sfree(p58););
printStats();
PRINT_POINTER(scalloc(196,175););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p54,61););
printStats();
void* p68 = last_address;
PRINT_POINTER(scalloc(247,234););
printStats();
void* p69 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p70 = last_address;
PRINT_POINTER(scalloc(213,32););
printStats();
void* p71 = last_address;
PRINT_POINTER(srealloc(p64,83););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p37,53););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p66,213););
printStats();
void* p75 = last_address;
PRINT_POINTER(srealloc(p69,226););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p65,26););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(199););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(scalloc(156,82););
printStats();
void* p79 = last_address;
PRINT_POINTER(srealloc(p41,167););
printStats();
void* p80 = last_address;
PRINT_POINTER(scalloc(199,2););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p70,222););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p83 = last_address;
PRINT_POINTER(smalloc(50););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(scalloc(146,160););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(srealloc(p67,78););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(227,8););
printStats();
void* p87 = last_address;
PRINT_POINTER(srealloc(p39,79););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p89 = last_address;
PRINT_POINTER(smalloc(79););
printStats();
void* p90 = last_address;
PRINT_POINTER(scalloc(227,159););
printStats();
void* p91 = last_address;
PRINT_POINTER(scalloc(129,247););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(158,135););
printStats();
void* p93 = last_address;
PRINT_POINTER(srealloc(p76,85););
printStats();
void* p94 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p95 = last_address;
DEBUG_PRINT(sfree(p56););
printStats();
PRINT_POINTER(scalloc(187,245););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p93,119););
printStats();
void* p97 = last_address;
PRINT_POINTER(scalloc(16,101););
printStats();
void* p98 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p99 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(scalloc(49,156););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p99,32););
printStats();
void* p101 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p102 = last_address;
PRINT_POINTER(srealloc(p84,55););
printStats();
void* p103 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p104 = last_address;
DEBUG_PRINT(sfree(p53););
printStats();
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(srealloc(p101,248););
printStats();
void* p105 = last_address;
PRINT_POINTER(scalloc(247,122););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(225,154););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p44,105););
printStats();
void* p108 = last_address;
PRINT_POINTER(scalloc(104,186););
printStats();
void* p109 = last_address;
PRINT_POINTER(srealloc(p86,49););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p111 = last_address;
PRINT_POINTER(scalloc(248,238););
printStats();
void* p112 = last_address;
PRINT_POINTER(scalloc(170,82););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p114 = last_address;
PRINT_POINTER(scalloc(127,50););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(86,146););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(242););
printStats();
void* p117 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(scalloc(177,46););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(srealloc(p63,161););
printStats();
void* p119 = last_address;
PRINT_POINTER(smalloc(18););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(74,83););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p118,53););
printStats();
void* p122 = last_address;
PRINT_POINTER(srealloc(p109,241););
printStats();
void* p123 = last_address;
PRINT_POINTER(srealloc(p112,165););
printStats();
void* p124 = last_address;
PRINT_POINTER(scalloc(197,118););
printStats();
void* p125 = last_address;
PRINT_POINTER(smalloc(92););
printStats();
void* p126 = last_address;
PRINT_POINTER(srealloc(p71,208););
printStats();
void* p127 = last_address;
PRINT_POINTER(smalloc(193););
printStats();
void* p128 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(scalloc(128,165););
printStats();
void* p129 = last_address;
PRINT_POINTER(scalloc(48,9););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p131 = last_address;
PRINT_POINTER(smalloc(32););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p133 = last_address;
PRINT_POINTER(scalloc(32,234););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p59,14););
printStats();
void* p135 = last_address;
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(smalloc(98););
printStats();
void* p136 = last_address;
PRINT_POINTER(scalloc(56,47););
printStats();
void* p137 = last_address;
PRINT_POINTER(scalloc(142,99););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(scalloc(150,182););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(216,33););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p141 = last_address;
PRINT_POINTER(srealloc(p126,141););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p120,85););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
PRINT_POINTER(smalloc(235););
printStats();
void* p144 = last_address;
DEBUG_PRINT(sfree(p125););
printStats();
DEBUG_PRINT(sfree(p139););
printStats();
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(smalloc(238););
printStats();
void* p145 = last_address;
PRINT_POINTER(smalloc(109););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(198););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(174,17););
printStats();
void* p148 = last_address;
PRINT_POINTER(scalloc(195,143););
printStats();
void* p149 = last_address;
DEBUG_PRINT(sfree(p148););
printStats();
PRINT_POINTER(scalloc(200,123););
printStats();
void* p150 = last_address;
PRINT_POINTER(scalloc(128,68););
printStats();
void* p151 = last_address;
PRINT_POINTER(smalloc(181););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(scalloc(88,48););
printStats();
void* p153 = last_address;
PRINT_POINTER(srealloc(p117,50););
printStats();
void* p154 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
DEBUG_PRINT(sfree(p105););
printStats();
PRINT_POINTER(scalloc(227,240););
printStats();
void* p155 = last_address;
PRINT_POINTER(srealloc(p103,188););
printStats();
void* p156 = last_address;
PRINT_POINTER(smalloc(216););
printStats();
void* p157 = last_address;
PRINT_POINTER(scalloc(33,140););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(7,57););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p77,44););
printStats();
void* p160 = last_address;
PRINT_POINTER(scalloc(93,120););
printStats();
void* p161 = last_address;
PRINT_POINTER(scalloc(116,42););
printStats();
void* p162 = last_address;
PRINT_POINTER(smalloc(35););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
DEBUG_PRINT(sfree(p89););
printStats();
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(scalloc(182,101););
printStats();
void* p164 = last_address;
PRINT_POINTER(srealloc(p113,210););
printStats();
void* p165 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(smalloc(69););
printStats();
void* p166 = last_address;
PRINT_POINTER(srealloc(p128,234););
printStats();
void* p167 = last_address;
PRINT_POINTER(scalloc(240,238););
printStats();
void* p168 = last_address;
PRINT_POINTER(scalloc(6,148););
printStats();
void* p169 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p170 = last_address;
PRINT_POINTER(smalloc(203););
printStats();
void* p171 = last_address;
PRINT_POINTER(srealloc(p158,112););
printStats();
void* p172 = last_address;
PRINT_POINTER(srealloc(p90,100););
printStats();
void* p173 = last_address;
PRINT_POINTER(srealloc(p144,146););
printStats();
void* p174 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p175 = last_address;
PRINT_POINTER(srealloc(p142,79););
printStats();
void* p176 = last_address;
PRINT_POINTER(scalloc(68,65););
printStats();
void* p177 = last_address;
PRINT_POINTER(srealloc(p134,31););
printStats();
void* p178 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p179 = last_address;
PRINT_POINTER(srealloc(p100,131););
printStats();
void* p180 = last_address;
PRINT_POINTER(srealloc(p173,197););
printStats();
void* p181 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
PRINT_POINTER(smalloc(90););
printStats();
void* p182 = last_address;
PRINT_POINTER(scalloc(220,153););
printStats();
void* p183 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p184 = last_address;
PRINT_POINTER(srealloc(p155,157););
printStats();
void* p185 = last_address;
PRINT_POINTER(srealloc(p163,16););
printStats();
void* p186 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p187 = last_address;
PRINT_POINTER(srealloc(p140,158););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p189 = last_address;
PRINT_POINTER(scalloc(118,230););
printStats();
void* p190 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
PRINT_POINTER(smalloc(13););
printStats();
void* p191 = last_address;
PRINT_POINTER(smalloc(246););
printStats();
void* p192 = last_address;
PRINT_POINTER(srealloc(p153,219););
printStats();
void* p193 = last_address;
PRINT_POINTER(srealloc(p165,3););
printStats();
void* p194 = last_address;
PRINT_POINTER(scalloc(79,163););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p107,205););
printStats();
void* p196 = last_address;
PRINT_POINTER(srealloc(p61,203););
printStats();
void* p197 = last_address;
PRINT_POINTER(srealloc(p154,112););
printStats();
void* p198 = last_address;
PRINT_POINTER(srealloc(p191,206););
printStats();
void* p199 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p87,155););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p150););
printStats();
PRINT_POINTER(scalloc(63,97););
printStats();
void* p202 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p203 = last_address;
PRINT_POINTER(srealloc(p88,27););
printStats();
void* p204 = last_address;
PRINT_POINTER(srealloc(p202,108););
printStats();
void* p205 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(192,232););
printStats();
void* p207 = last_address;
DEBUG_PRINT(sfree(p201););
printStats();
PRINT_POINTER(srealloc(p159,26););
printStats();
void* p208 = last_address;
PRINT_POINTER(scalloc(33,193););
printStats();
void* p209 = last_address;
PRINT_POINTER(srealloc(p143,40););
printStats();
void* p210 = last_address;
PRINT_POINTER(scalloc(68,61););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p72,64););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p211););
printStats();
PRINT_POINTER(scalloc(78,49););
printStats();
void* p213 = last_address;
PRINT_POINTER(srealloc(p108,229););
printStats();
void* p214 = last_address;
PRINT_POINTER(srealloc(p73,132););
printStats();
void* p215 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p216 = last_address;
DEBUG_PRINT(sfree(p167););
printStats();
PRINT_POINTER(scalloc(79,168););
printStats();
void* p217 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p218 = last_address;
PRINT_POINTER(scalloc(84,245););
printStats();
void* p219 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p220 = last_address;
PRINT_POINTER(scalloc(214,101););
printStats();
void* p221 = last_address;
DEBUG_PRINT(sfree(p207););
printStats();
PRINT_POINTER(scalloc(79,105););
printStats();
void* p222 = last_address;
DEBUG_PRINT(sfree(p131););
printStats();
PRINT_POINTER(scalloc(92,153););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p151););
printStats();
PRINT_POINTER(scalloc(137,99););
printStats();
void* p224 = last_address;
PRINT_POINTER(scalloc(150,188););
printStats();
void* p225 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p226 = last_address;
PRINT_POINTER(srealloc(p215,238););
printStats();
void* p227 = last_address;
PRINT_POINTER(srealloc(p177,3););
printStats();
void* p228 = last_address;
DEBUG_PRINT(sfree(p179););
printStats();
PRINT_POINTER(smalloc(69););
printStats();
void* p229 = last_address;
PRINT_POINTER(srealloc(p200,188););
printStats();
void* p230 = last_address;
PRINT_POINTER(srealloc(p119,218););
printStats();
void* p231 = last_address;
PRINT_POINTER(srealloc(p137,149););
printStats();
void* p232 = last_address;
PRINT_POINTER(scalloc(153,12););
printStats();
void* p233 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p234 = last_address;
DEBUG_PRINT(sfree(p221););
printStats();
PRINT_POINTER(srealloc(p209,234););
printStats();
void* p235 = last_address;
PRINT_POINTER(srealloc(p186,215););
printStats();
void* p236 = last_address;
PRINT_POINTER(scalloc(86,172););
printStats();
void* p237 = last_address;
DEBUG_PRINT(sfree(p227););
printStats();
DEBUG_PRINT(sfree(p222););
printStats();
PRINT_POINTER(scalloc(236,185););
printStats();
void* p238 = last_address;
PRINT_POINTER(scalloc(22,228););
printStats();
void* p239 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p240 = last_address;
DEBUG_PRINT(sfree(p175););
printStats();
PRINT_POINTER(srealloc(p213,96););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p242 = last_address;
DEBUG_PRINT(sfree(p206););
printStats();
DEBUG_PRINT(sfree(p146););
printStats();
PRINT_POINTER(srealloc(p203,126););
printStats();
void* p243 = last_address;
PRINT_POINTER(smalloc(136););
printStats();
void* p244 = last_address;
PRINT_POINTER(scalloc(189,208););
printStats();
void* p245 = last_address;
PRINT_POINTER(scalloc(101,10););
printStats();
void* p246 = last_address;
PRINT_POINTER(smalloc(248););
printStats();
void* p247 = last_address;
DEBUG_PRINT(sfree(p174););
printStats();
PRINT_POINTER(smalloc(125););
printStats();
void* p248 = last_address;
DEBUG_PRINT(sfree(p214););
printStats();
DEBUG_PRINT(sfree(p230););
printStats();
DEBUG_PRINT(sfree(p156););
printStats();
DEBUG_PRINT(sfree(p166););
printStats();
PRINT_POINTER(scalloc(228,33););
printStats();
void* p249 = last_address;
PRINT_POINTER(srealloc(p216,111););
printStats();
void* p250 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p251 = last_address;
PRINT_POINTER(srealloc(p123,46););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p226););
printStats();
PRINT_POINTER(smalloc(5););
printStats();
void* p253 = last_address;
PRINT_POINTER(scalloc(19,172););
printStats();
void* p254 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p255 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p256 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
DEBUG_PRINT(sfree(p138););
printStats();
PRINT_POINTER(smalloc(3););
printStats();
void* p257 = last_address;
DEBUG_PRINT(sfree(p192););
printStats();
DEBUG_PRINT(sfree(p183););
printStats();
DEBUG_PRINT(sfree(p250););
printStats();
PRINT_POINTER(smalloc(113););
printStats();
void* p258 = last_address;
PRINT_POINTER(srealloc(p122,176););
printStats();
void* p259 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(smalloc(90););
printStats();
void* p260 = last_address;
PRINT_POINTER(srealloc(p149,73););
printStats();
void* p261 = last_address;
DEBUG_PRINT(sfree(p232););
printStats();
PRINT_POINTER(srealloc(p228,177););
printStats();
void* p262 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p263 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p264 = last_address;
DEBUG_PRINT(sfree(p83););
printStats();
PRINT_POINTER(smalloc(186););
printStats();
void* p265 = last_address;
PRINT_POINTER(scalloc(105,1););
printStats();
void* p266 = last_address;
PRINT_POINTER(scalloc(42,90););
printStats();
void* p267 = last_address;
DEBUG_PRINT(sfree(p133););
printStats();
DEBUG_PRINT(sfree(p102););
printStats();
PRINT_POINTER(srealloc(p240,237););
printStats();
void* p268 = last_address;
DEBUG_PRINT(sfree(p164););
printStats();
PRINT_POINTER(srealloc(p129,42););
printStats();
void* p269 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p270 = last_address;
PRINT_POINTER(srealloc(p197,87););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(42,187););
printStats();
void* p272 = last_address;
PRINT_POINTER(srealloc(p181,181););
printStats();
void* p273 = last_address;
DEBUG_PRINT(sfree(p180););
printStats();
PRINT_POINTER(scalloc(124,95););
printStats();
void* p274 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p275 = last_address;
PRINT_POINTER(smalloc(197););
printStats();
void* p276 = last_address;
PRINT_POINTER(smalloc(77););
printStats();
void* p277 = last_address;
PRINT_POINTER(scalloc(37,245););
printStats();
void* p278 = last_address;
PRINT_POINTER(srealloc(p115,235););
printStats();
void* p279 = last_address;
DEBUG_PRINT(sfree(p170););
printStats();
DEBUG_PRINT(sfree(p196););
printStats();
PRINT_POINTER(smalloc(177););
printStats();
void* p280 = last_address;
DEBUG_PRINT(sfree(p195););
printStats();
PRINT_POINTER(smalloc(14););
printStats();
void* p281 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p282 = last_address;
PRINT_POINTER(smalloc(104););
printStats();
void* p283 = last_address;
PRINT_POINTER(srealloc(p239,104););
printStats();
void* p284 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p285 = last_address;
PRINT_POINTER(smalloc(51););
printStats();
void* p286 = last_address;
PRINT_POINTER(srealloc(p262,165););
printStats();
void* p287 = last_address;
PRINT_POINTER(srealloc(p204,243););
printStats();
void* p288 = last_address;
DEBUG_PRINT(sfree(p224););
printStats();
PRINT_POINTER(srealloc(p225,183););
printStats();
void* p289 = last_address;
PRINT_POINTER(scalloc(57,247););
printStats();
void* p290 = last_address;
PRINT_POINTER(scalloc(89,97););
printStats();
void* p291 = last_address;
DEBUG_PRINT(sfree(p245););
printStats();
PRINT_POINTER(srealloc(p169,76););
printStats();
void* p292 = last_address;
PRINT_POINTER(smalloc(117););
printStats();
void* p293 = last_address;
PRINT_POINTER(scalloc(164,193););
printStats();
void* p294 = last_address;
PRINT_POINTER(srealloc(p279,182););
printStats();
void* p295 = last_address;
DEBUG_PRINT(sfree(p276););
printStats();
DEBUG_PRINT(sfree(p268););
printStats();
PRINT_POINTER(smalloc(111););
printStats();
void* p296 = last_address;
PRINT_POINTER(smalloc(162););
printStats();
void* p297 = last_address;
PRINT_POINTER(srealloc(p270,214););
printStats();
void* p298 = last_address;
DEBUG_PRINT(sfree(p249););
printStats();
PRINT_POINTER(srealloc(p210,81););
printStats();
void* p299 = last_address;
DEBUG_PRINT(sfree(p234););
printStats();
PRINT_POINTER(scalloc(45,7););
printStats();
void* p300 = last_address;
PRINT_POINTER(smalloc(65););
printStats();
void* p301 = last_address;
PRINT_POINTER(scalloc(8,65););
printStats();
void* p302 = last_address;
PRINT_POINTER(srealloc(p182,74););
printStats();
void* p303 = last_address;
PRINT_POINTER(srealloc(p184,88););
printStats();
void* p304 = last_address;
PRINT_POINTER(srealloc(p283,112););
printStats();
void* p305 = last_address;
DEBUG_PRINT(sfree(p223););
printStats();
PRINT_POINTER(scalloc(200,246););
printStats();
void* p306 = last_address;
PRINT_POINTER(smalloc(185););
printStats();
void* p307 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p308 = last_address;
DEBUG_PRINT(sfree(p199););
printStats();
PRINT_POINTER(srealloc(p257,34););
printStats();
void* p309 = last_address;
PRINT_POINTER(smalloc(188););
printStats();
void* p310 = last_address;
PRINT_POINTER(scalloc(64,165););
printStats();
void* p311 = last_address;
PRINT_POINTER(srealloc(p287,137););
printStats();
void* p312 = last_address;
PRINT_POINTER(scalloc(176,231););
printStats();
void* p313 = last_address;
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(scalloc(2,133););
printStats();
void* p314 = last_address;
PRINT_POINTER(srealloc(p231,193););
printStats();
void* p315 = last_address;
PRINT_POINTER(smalloc(102););
printStats();
void* p316 = last_address;
DEBUG_PRINT(sfree(p244););
printStats();
PRINT_POINTER(srealloc(p229,16););
printStats();
void* p317 = last_address;
PRINT_POINTER(scalloc(24,113););
printStats();
void* p318 = last_address;
PRINT_POINTER(srealloc(p294,129););
printStats();
void* p319 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p320 = last_address;
PRINT_POINTER(smalloc(228););
printStats();
void* p321 = last_address;
DEBUG_PRINT(sfree(p147););
printStats();
DEBUG_PRINT(sfree(p141););
printStats();
PRINT_POINTER(srealloc(p243,217););
printStats();
void* p322 = last_address;
DEBUG_PRINT(sfree(p309););
printStats();
PRINT_POINTER(smalloc(16););
printStats();
void* p323 = last_address;
PRINT_POINTER(scalloc(27,68););
printStats();
void* p324 = last_address;
PRINT_POINTER(scalloc(232,243););
printStats();
void* p325 = last_address;
PRINT_POINTER(scalloc(182,22););
printStats();
void* p326 = last_address;
PRINT_POINTER(scalloc(180,232););
printStats();
void* p327 = last_address;
PRINT_POINTER(srealloc(p254,163););
printStats();
void* p328 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p329 = last_address;
DEBUG_PRINT(sfree(p255););
printStats();
DEBUG_PRINT(sfree(p329););
printStats();
PRINT_POINTER(smalloc(23););
printStats();
void* p330 = last_address;
PRINT_POINTER(srealloc(p253,107););
printStats();
void* p331 = last_address;
PRINT_POINTER(srealloc(p269,9););
printStats();
void* p332 = last_address;
PRINT_POINTER(smalloc(155););
printStats();
void* p333 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
PRINT_POINTER(smalloc(223););
printStats();
void* p334 = last_address;
DEBUG_PRINT(sfree(p189););
printStats();
PRINT_POINTER(scalloc(208,136););
printStats();
void* p335 = last_address;
PRINT_POINTER(srealloc(p242,37););
printStats();
void* p336 = last_address;
PRINT_POINTER(srealloc(p172,42););
printStats();
void* p337 = last_address;
PRINT_POINTER(scalloc(167,9););
printStats();
void* p338 = last_address;
PRINT_POINTER(scalloc(8,211););
printStats();
void* p339 = last_address;
PRINT_POINTER(scalloc(57,17););
printStats();
void* p340 = last_address;
PRINT_POINTER(scalloc(3,147););
printStats();
void* p341 = last_address;
DEBUG_PRINT(sfree(p280););
printStats();
PRINT_POINTER(scalloc(216,172););
printStats();
void* p342 = last_address;
DEBUG_PRINT(sfree(p310););
printStats();
DEBUG_PRINT(sfree(p307););
printStats();
PRINT_POINTER(srealloc(p282,166););
printStats();
void* p343 = last_address;
DEBUG_PRINT(sfree(p277););
printStats();
PRINT_POINTER(smalloc(216););
printStats();
void* p344 = last_address;
PRINT_POINTER(smalloc(167););
printStats();
void* p345 = last_address;
DEBUG_PRINT(sfree(p286););
printStats();
PRINT_POINTER(srealloc(p218,29););
printStats();
void* p346 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p347 = last_address;
DEBUG_PRINT(sfree(p130););
printStats();
DEBUG_PRINT(sfree(p241););
printStats();
DEBUG_PRINT(sfree(p340););
printStats();
PRINT_POINTER(srealloc(p345,147););
printStats();
void* p348 = last_address;
PRINT_POINTER(scalloc(82,64););
printStats();
void* p349 = last_address;
DEBUG_PRINT(sfree(p303););
printStats();
PRINT_POINTER(smalloc(212););
printStats();
void* p350 = last_address;
PRINT_POINTER(smalloc(114););
printStats();
void* p351 = last_address;
}
