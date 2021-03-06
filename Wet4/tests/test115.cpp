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
                        PRINT_POINTER(scalloc(25,67););
printStats();
void* p0 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p1 = last_address;
PRINT_POINTER(scalloc(99,41););
printStats();
void* p2 = last_address;
PRINT_POINTER(smalloc(139););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p2,40););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(smalloc(25););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p0,41););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(smalloc(237););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p5,95););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(109,12););
printStats();
void* p9 = last_address;
PRINT_POINTER(srealloc(p7,59););
printStats();
void* p10 = last_address;
PRINT_POINTER(srealloc(p9,198););
printStats();
void* p11 = last_address;
PRINT_POINTER(scalloc(115,26););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p13 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(srealloc(p11,123););
printStats();
void* p14 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
DEBUG_PRINT(sfree(p14););
printStats();
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(smalloc(141););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(179,18););
printStats();
void* p16 = last_address;
PRINT_POINTER(scalloc(160,141););
printStats();
void* p17 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(srealloc(p10,13););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(101););
printStats();
void* p19 = last_address;
PRINT_POINTER(srealloc(p12,188););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(scalloc(243,28););
printStats();
void* p21 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(78,28););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(53,99););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(33,137););
printStats();
void* p25 = last_address;
PRINT_POINTER(scalloc(168,50););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(204););
printStats();
void* p27 = last_address;
PRINT_POINTER(srealloc(p19,6););
printStats();
void* p28 = last_address;
PRINT_POINTER(smalloc(92););
printStats();
void* p29 = last_address;
PRINT_POINTER(srealloc(p22,21););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p32 = last_address;
PRINT_POINTER(scalloc(118,48););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(80,233););
printStats();
void* p34 = last_address;
PRINT_POINTER(srealloc(p15,132););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p24,220););
printStats();
void* p37 = last_address;
PRINT_POINTER(srealloc(p36,183););
printStats();
void* p38 = last_address;
PRINT_POINTER(scalloc(45,8););
printStats();
void* p39 = last_address;
PRINT_POINTER(srealloc(p35,234););
printStats();
void* p40 = last_address;
PRINT_POINTER(srealloc(p17,215););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(190,209););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p43 = last_address;
PRINT_POINTER(smalloc(43););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p45 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p47 = last_address;
PRINT_POINTER(smalloc(1););
printStats();
void* p48 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(132,99););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(smalloc(146););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(208,215););
printStats();
void* p52 = last_address;
PRINT_POINTER(smalloc(151););
printStats();
void* p53 = last_address;
PRINT_POINTER(scalloc(133,124););
printStats();
void* p54 = last_address;
PRINT_POINTER(scalloc(114,129););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(srealloc(p54,144););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(20,5););
printStats();
void* p57 = last_address;
PRINT_POINTER(scalloc(203,128););
printStats();
void* p58 = last_address;
PRINT_POINTER(srealloc(p28,7););
printStats();
void* p59 = last_address;
PRINT_POINTER(scalloc(132,133););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p61 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(srealloc(p32,169););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(77,246););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p41,135););
printStats();
void* p64 = last_address;
PRINT_POINTER(srealloc(p60,106););
printStats();
void* p65 = last_address;
PRINT_POINTER(scalloc(14,240););
printStats();
void* p66 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
DEBUG_PRINT(sfree(p65););
printStats();
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(srealloc(p56,209););
printStats();
void* p67 = last_address;
PRINT_POINTER(scalloc(170,40););
printStats();
void* p68 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(srealloc(p47,146););
printStats();
void* p70 = last_address;
PRINT_POINTER(scalloc(228,206););
printStats();
void* p71 = last_address;
PRINT_POINTER(srealloc(p34,116););
printStats();
void* p72 = last_address;
PRINT_POINTER(scalloc(155,221););
printStats();
void* p73 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(172););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p53););
printStats();
PRINT_POINTER(srealloc(p21,54););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p33,116););
printStats();
void* p77 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(srealloc(p72,122););
printStats();
void* p78 = last_address;
PRINT_POINTER(scalloc(136,62););
printStats();
void* p79 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p71););
printStats();
PRINT_POINTER(smalloc(240););
printStats();
void* p81 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(scalloc(76,210););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(smalloc(49););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(srealloc(p40,229););
printStats();
void* p84 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p85 = last_address;
PRINT_POINTER(scalloc(30,73););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(246,135););
printStats();
void* p87 = last_address;
PRINT_POINTER(srealloc(p74,248););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(smalloc(197););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(srealloc(p50,222););
printStats();
void* p92 = last_address;
PRINT_POINTER(srealloc(p43,236););
printStats();
void* p93 = last_address;
PRINT_POINTER(srealloc(p88,159););
printStats();
void* p94 = last_address;
PRINT_POINTER(srealloc(p91,74););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p31,57););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p86,120););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p97,80););
printStats();
void* p98 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p99 = last_address;
PRINT_POINTER(scalloc(175,112););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p84,12););
printStats();
void* p101 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(100););
printStats();
void* p103 = last_address;
PRINT_POINTER(srealloc(p80,170););
printStats();
void* p104 = last_address;
PRINT_POINTER(scalloc(124,23););
printStats();
void* p105 = last_address;
PRINT_POINTER(scalloc(81,172););
printStats();
void* p106 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p107 = last_address;
PRINT_POINTER(smalloc(211););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p101,64););
printStats();
void* p109 = last_address;
PRINT_POINTER(scalloc(2,178););
printStats();
void* p110 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(scalloc(143,230););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
DEBUG_PRINT(sfree(p102););
printStats();
PRINT_POINTER(scalloc(158,208););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(srealloc(p83,76););
printStats();
void* p113 = last_address;
PRINT_POINTER(scalloc(96,32););
printStats();
void* p114 = last_address;
PRINT_POINTER(srealloc(p92,10););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p58););
printStats();
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(srealloc(p77,145););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p117 = last_address;
PRINT_POINTER(smalloc(150););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(200,143););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(24,88););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(scalloc(59,238););
printStats();
void* p121 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(srealloc(p51,182););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(185,36););
printStats();
void* p123 = last_address;
PRINT_POINTER(scalloc(112,147););
printStats();
void* p124 = last_address;
PRINT_POINTER(scalloc(17,4););
printStats();
void* p125 = last_address;
PRINT_POINTER(srealloc(p98,54););
printStats();
void* p126 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p127 = last_address;
PRINT_POINTER(srealloc(p75,27););
printStats();
void* p128 = last_address;
PRINT_POINTER(scalloc(70,125););
printStats();
void* p129 = last_address;
PRINT_POINTER(srealloc(p26,7););
printStats();
void* p130 = last_address;
PRINT_POINTER(scalloc(185,118););
printStats();
void* p131 = last_address;
PRINT_POINTER(scalloc(0,225););
printStats();
void* p132 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(srealloc(p96,114););
printStats();
void* p133 = last_address;
DEBUG_PRINT(sfree(p105););
printStats();
PRINT_POINTER(scalloc(136,160););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p106,126););
printStats();
void* p135 = last_address;
PRINT_POINTER(scalloc(104,205););
printStats();
void* p136 = last_address;
PRINT_POINTER(srealloc(p85,5););
printStats();
void* p137 = last_address;
PRINT_POINTER(srealloc(p120,171););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
PRINT_POINTER(srealloc(p25,69););
printStats();
void* p139 = last_address;
PRINT_POINTER(srealloc(p132,130););
printStats();
void* p140 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(scalloc(41,20););
printStats();
void* p141 = last_address;
PRINT_POINTER(scalloc(202,198););
printStats();
void* p142 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(smalloc(208););
printStats();
void* p143 = last_address;
PRINT_POINTER(srealloc(p134,152););
printStats();
void* p144 = last_address;
PRINT_POINTER(smalloc(50););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p122,119););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(37););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(96,59););
printStats();
void* p148 = last_address;
PRINT_POINTER(scalloc(149,74););
printStats();
void* p149 = last_address;
DEBUG_PRINT(sfree(p113););
printStats();
PRINT_POINTER(srealloc(p136,151););
printStats();
void* p150 = last_address;
PRINT_POINTER(smalloc(166););
printStats();
void* p151 = last_address;
PRINT_POINTER(srealloc(p63,84););
printStats();
void* p152 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p153 = last_address;
PRINT_POINTER(smalloc(218););
printStats();
void* p154 = last_address;
PRINT_POINTER(srealloc(p130,116););
printStats();
void* p155 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
PRINT_POINTER(smalloc(203););
printStats();
void* p156 = last_address;
PRINT_POINTER(srealloc(p146,138););
printStats();
void* p157 = last_address;
PRINT_POINTER(smalloc(92););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(206,174););
printStats();
void* p159 = last_address;
DEBUG_PRINT(sfree(p155););
printStats();
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(srealloc(p29,88););
printStats();
void* p160 = last_address;
PRINT_POINTER(srealloc(p116,56););
printStats();
void* p161 = last_address;
PRINT_POINTER(srealloc(p79,18););
printStats();
void* p162 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(scalloc(111,116););
printStats();
void* p163 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(scalloc(32,148););
printStats();
void* p165 = last_address;
PRINT_POINTER(scalloc(36,151););
printStats();
void* p166 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p167 = last_address;
PRINT_POINTER(smalloc(143););
printStats();
void* p168 = last_address;
DEBUG_PRINT(sfree(p157););
printStats();
PRINT_POINTER(smalloc(102););
printStats();
void* p169 = last_address;
PRINT_POINTER(scalloc(125,124););
printStats();
void* p170 = last_address;
DEBUG_PRINT(sfree(p87););
printStats();
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(srealloc(p139,212););
printStats();
void* p171 = last_address;
PRINT_POINTER(srealloc(p151,240););
printStats();
void* p172 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p173 = last_address;
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(smalloc(223););
printStats();
void* p174 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p175 = last_address;
PRINT_POINTER(srealloc(p61,7););
printStats();
void* p176 = last_address;
DEBUG_PRINT(sfree(p159););
printStats();
PRINT_POINTER(srealloc(p158,247););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
PRINT_POINTER(smalloc(176););
printStats();
void* p178 = last_address;
PRINT_POINTER(scalloc(18,235););
printStats();
void* p179 = last_address;
DEBUG_PRINT(sfree(p124););
printStats();
PRINT_POINTER(scalloc(222,212););
printStats();
void* p180 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
PRINT_POINTER(srealloc(p164,104););
printStats();
void* p181 = last_address;
PRINT_POINTER(srealloc(p49,0););
printStats();
void* p182 = last_address;
PRINT_POINTER(scalloc(81,159););
printStats();
void* p183 = last_address;
DEBUG_PRINT(sfree(p93););
printStats();
DEBUG_PRINT(sfree(p165););
printStats();
PRINT_POINTER(scalloc(117,241););
printStats();
void* p184 = last_address;
PRINT_POINTER(scalloc(81,84););
printStats();
void* p185 = last_address;
PRINT_POINTER(srealloc(p152,134););
printStats();
void* p186 = last_address;
PRINT_POINTER(srealloc(p42,127););
printStats();
void* p187 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
DEBUG_PRINT(sfree(p181););
printStats();
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(smalloc(176););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(79););
printStats();
void* p189 = last_address;
PRINT_POINTER(scalloc(116,25););
printStats();
void* p190 = last_address;
PRINT_POINTER(srealloc(p172,164););
printStats();
void* p191 = last_address;
PRINT_POINTER(srealloc(p168,72););
printStats();
void* p192 = last_address;
PRINT_POINTER(srealloc(p150,90););
printStats();
void* p193 = last_address;
PRINT_POINTER(srealloc(p145,97););
printStats();
void* p194 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p115,238););
printStats();
void* p196 = last_address;
PRINT_POINTER(smalloc(59););
printStats();
void* p197 = last_address;
PRINT_POINTER(scalloc(33,14););
printStats();
void* p198 = last_address;
PRINT_POINTER(scalloc(98,108););
printStats();
void* p199 = last_address;
DEBUG_PRINT(sfree(p196););
printStats();
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(srealloc(p99,45););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p133,197););
printStats();
void* p201 = last_address;
PRINT_POINTER(srealloc(p198,238););
printStats();
void* p202 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(scalloc(238,158););
printStats();
void* p203 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p204 = last_address;
PRINT_POINTER(srealloc(p186,109););
printStats();
void* p205 = last_address;
PRINT_POINTER(srealloc(p163,47););
printStats();
void* p206 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p207 = last_address;
PRINT_POINTER(smalloc(242););
printStats();
void* p208 = last_address;
PRINT_POINTER(scalloc(110,66););
printStats();
void* p209 = last_address;
PRINT_POINTER(smalloc(199););
printStats();
void* p210 = last_address;
PRINT_POINTER(scalloc(137,91););
printStats();
void* p211 = last_address;
DEBUG_PRINT(sfree(p148););
printStats();
PRINT_POINTER(scalloc(222,171););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p206););
printStats();
PRINT_POINTER(smalloc(249););
printStats();
void* p213 = last_address;
PRINT_POINTER(scalloc(6,227););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p215 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p216 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(srealloc(p142,171););
printStats();
void* p217 = last_address;
PRINT_POINTER(scalloc(3,33););
printStats();
void* p218 = last_address;
PRINT_POINTER(scalloc(89,78););
printStats();
void* p219 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p220 = last_address;
PRINT_POINTER(srealloc(p82,215););
printStats();
void* p221 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
DEBUG_PRINT(sfree(p208););
printStats();
PRINT_POINTER(smalloc(152););
printStats();
void* p222 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p138););
printStats();
PRINT_POINTER(smalloc(192););
printStats();
void* p224 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p225 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(scalloc(78,69););
printStats();
void* p226 = last_address;
PRINT_POINTER(srealloc(p214,56););
printStats();
void* p227 = last_address;
PRINT_POINTER(srealloc(p174,92););
printStats();
void* p228 = last_address;
PRINT_POINTER(smalloc(115););
printStats();
void* p229 = last_address;
PRINT_POINTER(scalloc(114,187););
printStats();
void* p230 = last_address;
PRINT_POINTER(srealloc(p143,68););
printStats();
void* p231 = last_address;
PRINT_POINTER(smalloc(244););
printStats();
void* p232 = last_address;
PRINT_POINTER(srealloc(p194,64););
printStats();
void* p233 = last_address;
DEBUG_PRINT(sfree(p166););
printStats();
PRINT_POINTER(smalloc(210););
printStats();
void* p234 = last_address;
PRINT_POINTER(srealloc(p180,45););
printStats();
void* p235 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p236 = last_address;
PRINT_POINTER(scalloc(141,65););
printStats();
void* p237 = last_address;
DEBUG_PRINT(sfree(p175););
printStats();
PRINT_POINTER(scalloc(97,5););
printStats();
void* p238 = last_address;
PRINT_POINTER(srealloc(p231,104););
printStats();
void* p239 = last_address;
PRINT_POINTER(scalloc(235,37););
printStats();
void* p240 = last_address;
PRINT_POINTER(srealloc(p135,1););
printStats();
void* p241 = last_address;
PRINT_POINTER(srealloc(p236,124););
printStats();
void* p242 = last_address;
DEBUG_PRINT(sfree(p129););
printStats();
PRINT_POINTER(smalloc(115););
printStats();
void* p243 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p244 = last_address;
DEBUG_PRINT(sfree(p209););
printStats();
DEBUG_PRINT(sfree(p213););
printStats();
PRINT_POINTER(smalloc(59););
printStats();
void* p245 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p246 = last_address;
PRINT_POINTER(smalloc(190););
printStats();
void* p247 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p248 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p249 = last_address;
DEBUG_PRINT(sfree(p126););
printStats();
PRINT_POINTER(scalloc(167,42););
printStats();
void* p250 = last_address;
DEBUG_PRINT(sfree(p241););
printStats();
PRINT_POINTER(smalloc(80););
printStats();
void* p251 = last_address;
PRINT_POINTER(srealloc(p205,185););
printStats();
void* p252 = last_address;
PRINT_POINTER(smalloc(186););
printStats();
void* p253 = last_address;
PRINT_POINTER(scalloc(21,90););
printStats();
void* p254 = last_address;
DEBUG_PRINT(sfree(p224););
printStats();
DEBUG_PRINT(sfree(p201););
printStats();
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(smalloc(167););
printStats();
void* p255 = last_address;
PRINT_POINTER(smalloc(82););
printStats();
void* p256 = last_address;
DEBUG_PRINT(sfree(p253););
printStats();
DEBUG_PRINT(sfree(p48););
printStats();
PRINT_POINTER(smalloc(123););
printStats();
void* p257 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p258 = last_address;
PRINT_POINTER(srealloc(p250,133););
printStats();
void* p259 = last_address;
PRINT_POINTER(scalloc(74,150););
printStats();
void* p260 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
PRINT_POINTER(scalloc(23,125););
printStats();
void* p261 = last_address;
DEBUG_PRINT(sfree(p190););
printStats();
DEBUG_PRINT(sfree(p125););
printStats();
PRINT_POINTER(scalloc(99,63););
printStats();
void* p262 = last_address;
PRINT_POINTER(scalloc(68,28););
printStats();
void* p263 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p264 = last_address;
DEBUG_PRINT(sfree(p264););
printStats();
PRINT_POINTER(scalloc(4,53););
printStats();
void* p265 = last_address;
PRINT_POINTER(scalloc(158,127););
printStats();
void* p266 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p267 = last_address;
PRINT_POINTER(smalloc(135););
printStats();
void* p268 = last_address;
PRINT_POINTER(smalloc(206););
printStats();
void* p269 = last_address;
PRINT_POINTER(srealloc(p197,69););
printStats();
void* p270 = last_address;
PRINT_POINTER(srealloc(p211,167););
printStats();
void* p271 = last_address;
DEBUG_PRINT(sfree(p154););
printStats();
PRINT_POINTER(smalloc(237););
printStats();
void* p272 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p273 = last_address;
PRINT_POINTER(srealloc(p230,200););
printStats();
void* p274 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p275 = last_address;
PRINT_POINTER(srealloc(p232,173););
printStats();
void* p276 = last_address;
PRINT_POINTER(srealloc(p185,207););
printStats();
void* p277 = last_address;
PRINT_POINTER(srealloc(p227,237););
printStats();
void* p278 = last_address;
PRINT_POINTER(srealloc(p233,63););
printStats();
void* p279 = last_address;
DEBUG_PRINT(sfree(p177););
printStats();
PRINT_POINTER(scalloc(234,143););
printStats();
void* p280 = last_address;
DEBUG_PRINT(sfree(p266););
printStats();
PRINT_POINTER(smalloc(134););
printStats();
void* p281 = last_address;
PRINT_POINTER(srealloc(p216,65););
printStats();
void* p282 = last_address;
DEBUG_PRINT(sfree(p261););
printStats();
PRINT_POINTER(srealloc(p279,91););
printStats();
void* p283 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(srealloc(p119,52););
printStats();
void* p284 = last_address;
PRINT_POINTER(srealloc(p278,119););
printStats();
void* p285 = last_address;
PRINT_POINTER(scalloc(50,142););
printStats();
void* p286 = last_address;
PRINT_POINTER(srealloc(p162,129););
printStats();
void* p287 = last_address;
DEBUG_PRINT(sfree(p207););
printStats();
DEBUG_PRINT(sfree(p189););
printStats();
PRINT_POINTER(srealloc(p263,228););
printStats();
void* p288 = last_address;
DEBUG_PRINT(sfree(p255););
printStats();
DEBUG_PRINT(sfree(p149););
printStats();
PRINT_POINTER(scalloc(214,38););
printStats();
void* p289 = last_address;
PRINT_POINTER(scalloc(176,124););
printStats();
void* p290 = last_address;
PRINT_POINTER(scalloc(154,50););
printStats();
void* p291 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p292 = last_address;
DEBUG_PRINT(sfree(p171););
printStats();
PRINT_POINTER(srealloc(p248,84););
printStats();
void* p293 = last_address;
PRINT_POINTER(scalloc(70,172););
printStats();
void* p294 = last_address;
PRINT_POINTER(scalloc(85,93););
printStats();
void* p295 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p296 = last_address;
DEBUG_PRINT(sfree(p288););
printStats();
PRINT_POINTER(srealloc(p276,46););
printStats();
void* p297 = last_address;
PRINT_POINTER(scalloc(195,79););
printStats();
void* p298 = last_address;
DEBUG_PRINT(sfree(p291););
printStats();
DEBUG_PRINT(sfree(p271););
printStats();
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(srealloc(p260,65););
printStats();
void* p299 = last_address;
PRINT_POINTER(smalloc(241););
printStats();
void* p300 = last_address;
PRINT_POINTER(scalloc(63,127););
printStats();
void* p301 = last_address;
PRINT_POINTER(srealloc(p246,19););
printStats();
void* p302 = last_address;
PRINT_POINTER(scalloc(113,178););
printStats();
void* p303 = last_address;
PRINT_POINTER(smalloc(166););
printStats();
void* p304 = last_address;
DEBUG_PRINT(sfree(p301););
printStats();
PRINT_POINTER(srealloc(p259,135););
printStats();
void* p305 = last_address;
DEBUG_PRINT(sfree(p304););
printStats();
PRINT_POINTER(scalloc(107,187););
printStats();
void* p306 = last_address;
PRINT_POINTER(scalloc(93,26););
printStats();
void* p307 = last_address;
PRINT_POINTER(scalloc(207,212););
printStats();
void* p308 = last_address;
PRINT_POINTER(srealloc(p222,174););
printStats();
void* p309 = last_address;
DEBUG_PRINT(sfree(p76););
printStats();
PRINT_POINTER(scalloc(101,196););
printStats();
void* p310 = last_address;
PRINT_POINTER(smalloc(94););
printStats();
void* p311 = last_address;
PRINT_POINTER(smalloc(233););
printStats();
void* p312 = last_address;
PRINT_POINTER(srealloc(p283,249););
printStats();
void* p313 = last_address;
PRINT_POINTER(smalloc(74););
printStats();
void* p314 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p315 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(smalloc(127););
printStats();
void* p316 = last_address;
DEBUG_PRINT(sfree(p284););
printStats();
DEBUG_PRINT(sfree(p270););
printStats();
PRINT_POINTER(smalloc(237););
printStats();
void* p317 = last_address;
DEBUG_PRINT(sfree(p228););
printStats();
PRINT_POINTER(scalloc(189,56););
printStats();
void* p318 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(smalloc(8););
printStats();
void* p319 = last_address;
PRINT_POINTER(srealloc(p254,140););
printStats();
void* p320 = last_address;
DEBUG_PRINT(sfree(p235););
printStats();
PRINT_POINTER(smalloc(153););
printStats();
void* p321 = last_address;
PRINT_POINTER(smalloc(186););
printStats();
void* p322 = last_address;
PRINT_POINTER(srealloc(p295,81););
printStats();
void* p323 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p324 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p325 = last_address;
DEBUG_PRINT(sfree(p239););
printStats();
DEBUG_PRINT(sfree(p316););
printStats();
PRINT_POINTER(scalloc(61,155););
printStats();
void* p326 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p327 = last_address;
PRINT_POINTER(scalloc(244,177););
printStats();
void* p328 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p329 = last_address;
DEBUG_PRINT(sfree(p324););
printStats();
PRINT_POINTER(smalloc(65););
printStats();
void* p330 = last_address;
PRINT_POINTER(scalloc(147,84););
printStats();
void* p331 = last_address;
PRINT_POINTER(smalloc(180););
printStats();
void* p332 = last_address;
PRINT_POINTER(scalloc(44,169););
printStats();
void* p333 = last_address;
PRINT_POINTER(smalloc(239););
printStats();
void* p334 = last_address;
PRINT_POINTER(scalloc(156,199););
printStats();
void* p335 = last_address;
PRINT_POINTER(scalloc(83,207););
printStats();
void* p336 = last_address;
PRINT_POINTER(scalloc(116,37););
printStats();
void* p337 = last_address;
PRINT_POINTER(smalloc(193););
printStats();
void* p338 = last_address;
PRINT_POINTER(scalloc(227,93););
printStats();
void* p339 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p340 = last_address;
PRINT_POINTER(smalloc(225););
printStats();
void* p341 = last_address;
DEBUG_PRINT(sfree(p203););
printStats();
DEBUG_PRINT(sfree(p317););
printStats();
PRINT_POINTER(scalloc(204,140););
printStats();
void* p342 = last_address;
PRINT_POINTER(srealloc(p286,175););
printStats();
void* p343 = last_address;
PRINT_POINTER(srealloc(p280,181););
printStats();
void* p344 = last_address;
PRINT_POINTER(srealloc(p200,166););
printStats();
void* p345 = last_address;
PRINT_POINTER(srealloc(p199,142););
printStats();
void* p346 = last_address;
PRINT_POINTER(srealloc(p244,86););
printStats();
void* p347 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p348 = last_address;
DEBUG_PRINT(sfree(p341););
printStats();
PRINT_POINTER(scalloc(11,169););
printStats();
void* p349 = last_address;
DEBUG_PRINT(sfree(p349););
printStats();
PRINT_POINTER(srealloc(p184,69););
printStats();
void* p350 = last_address;
DEBUG_PRINT(sfree(p325););
printStats();
PRINT_POINTER(smalloc(164););
printStats();
void* p351 = last_address;
PRINT_POINTER(scalloc(244,207););
printStats();
void* p352 = last_address;
DEBUG_PRINT(sfree(p217););
printStats();
PRINT_POINTER(srealloc(p321,148););
printStats();
void* p353 = last_address;
PRINT_POINTER(scalloc(46,46););
printStats();
void* p354 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p355 = last_address;
DEBUG_PRINT(sfree(p273););
printStats();
PRINT_POINTER(srealloc(p287,131););
printStats();
void* p356 = last_address;
PRINT_POINTER(smalloc(108););
printStats();
void* p357 = last_address;
PRINT_POINTER(smalloc(83););
printStats();
void* p358 = last_address;
PRINT_POINTER(scalloc(128,217););
printStats();
void* p359 = last_address;
PRINT_POINTER(srealloc(p318,4););
printStats();
void* p360 = last_address;
PRINT_POINTER(scalloc(112,195););
printStats();
void* p361 = last_address;
PRINT_POINTER(scalloc(132,17););
printStats();
void* p362 = last_address;
DEBUG_PRINT(sfree(p303););
printStats();
DEBUG_PRINT(sfree(p302););
printStats();
PRINT_POINTER(smalloc(93););
printStats();
void* p363 = last_address;
PRINT_POINTER(srealloc(p210,138););
printStats();
void* p364 = last_address;
PRINT_POINTER(scalloc(215,108););
printStats();
void* p365 = last_address;
PRINT_POINTER(scalloc(25,53););
printStats();
void* p366 = last_address;
PRINT_POINTER(srealloc(p334,69););
printStats();
void* p367 = last_address;
PRINT_POINTER(srealloc(p327,163););
printStats();
void* p368 = last_address;
PRINT_POINTER(smalloc(162););
printStats();
void* p369 = last_address;
PRINT_POINTER(scalloc(228,152););
printStats();
void* p370 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p371 = last_address;
PRINT_POINTER(smalloc(233););
printStats();
void* p372 = last_address;
PRINT_POINTER(scalloc(192,178););
printStats();
void* p373 = last_address;
PRINT_POINTER(srealloc(p128,219););
printStats();
void* p374 = last_address;
DEBUG_PRINT(sfree(p365););
printStats();
PRINT_POINTER(scalloc(190,202););
printStats();
void* p375 = last_address;
DEBUG_PRINT(sfree(p345););
printStats();
PRINT_POINTER(smalloc(163););
printStats();
void* p376 = last_address;
PRINT_POINTER(scalloc(77,150););
printStats();
void* p377 = last_address;
DEBUG_PRINT(sfree(p355););
printStats();
PRINT_POINTER(srealloc(p296,187););
printStats();
void* p378 = last_address;
DEBUG_PRINT(sfree(p272););
printStats();
DEBUG_PRINT(sfree(p371););
printStats();
PRINT_POINTER(scalloc(169,123););
printStats();
void* p379 = last_address;
PRINT_POINTER(scalloc(218,2););
printStats();
void* p380 = last_address;
PRINT_POINTER(srealloc(p366,22););
printStats();
void* p381 = last_address;
PRINT_POINTER(srealloc(p342,17););
printStats();
void* p382 = last_address;
PRINT_POINTER(scalloc(177,206););
printStats();
void* p383 = last_address;
DEBUG_PRINT(sfree(p370););
printStats();
DEBUG_PRINT(sfree(p361););
printStats();
PRINT_POINTER(smalloc(155););
printStats();
void* p384 = last_address;
PRINT_POINTER(srealloc(p293,75););
printStats();
void* p385 = last_address;
PRINT_POINTER(scalloc(237,89););
printStats();
void* p386 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p387 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p388 = last_address;
PRINT_POINTER(smalloc(47););
printStats();
void* p389 = last_address;
DEBUG_PRINT(sfree(p277););
printStats();
PRINT_POINTER(scalloc(231,100););
printStats();
void* p390 = last_address;
DEBUG_PRINT(sfree(p357););
printStats();
PRINT_POINTER(smalloc(32););
printStats();
void* p391 = last_address;
PRINT_POINTER(srealloc(p346,142););
printStats();
void* p392 = last_address;
PRINT_POINTER(srealloc(p294,32););
printStats();
void* p393 = last_address;
DEBUG_PRINT(sfree(p335););
printStats();
DEBUG_PRINT(sfree(p386););
printStats();
PRINT_POINTER(srealloc(p326,80););
printStats();
void* p394 = last_address;
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(smalloc(235););
printStats();
void* p395 = last_address;
DEBUG_PRINT(sfree(p336););
printStats();
PRINT_POINTER(scalloc(0,17););
printStats();
void* p396 = last_address;
DEBUG_PRINT(sfree(p319););
printStats();
DEBUG_PRINT(sfree(p275););
printStats();
PRINT_POINTER(scalloc(143,232););
printStats();
void* p397 = last_address;
PRINT_POINTER(scalloc(236,17););
printStats();
void* p398 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p399 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p400 = last_address;
PRINT_POINTER(srealloc(p384,122););
printStats();
void* p401 = last_address;
PRINT_POINTER(smalloc(90););
printStats();
void* p402 = last_address;
PRINT_POINTER(smalloc(42););
printStats();
void* p403 = last_address;
DEBUG_PRINT(sfree(p333););
printStats();
PRINT_POINTER(srealloc(p337,160););
printStats();
void* p404 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p405 = last_address;
PRINT_POINTER(scalloc(4,34););
printStats();
void* p406 = last_address;
DEBUG_PRINT(sfree(p188););
printStats();
PRINT_POINTER(scalloc(220,249););
printStats();
void* p407 = last_address;
PRINT_POINTER(srealloc(p147,208););
printStats();
void* p408 = last_address;
PRINT_POINTER(scalloc(179,87););
printStats();
void* p409 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p410 = last_address;
PRINT_POINTER(srealloc(p387,167););
printStats();
void* p411 = last_address;
PRINT_POINTER(scalloc(115,15););
printStats();
void* p412 = last_address;
PRINT_POINTER(scalloc(105,5););
printStats();
void* p413 = last_address;
DEBUG_PRINT(sfree(p399););
printStats();
DEBUG_PRINT(sfree(p409););
printStats();
PRINT_POINTER(scalloc(198,163););
printStats();
void* p414 = last_address;
PRINT_POINTER(srealloc(p225,9););
printStats();
void* p415 = last_address;
DEBUG_PRINT(sfree(p405););
printStats();
PRINT_POINTER(scalloc(90,151););
printStats();
void* p416 = last_address;
DEBUG_PRINT(sfree(p373););
printStats();
PRINT_POINTER(smalloc(108););
printStats();
void* p417 = last_address;
PRINT_POINTER(scalloc(15,131););
printStats();
void* p418 = last_address;
DEBUG_PRINT(sfree(p408););
printStats();
PRINT_POINTER(smalloc(12););
printStats();
void* p419 = last_address;
DEBUG_PRINT(sfree(p416););
printStats();
PRINT_POINTER(srealloc(p247,99););
printStats();
void* p420 = last_address;
PRINT_POINTER(srealloc(p372,187););
printStats();
void* p421 = last_address;
PRINT_POINTER(scalloc(148,244););
printStats();
void* p422 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p423 = last_address;
PRINT_POINTER(scalloc(45,195););
printStats();
void* p424 = last_address;
PRINT_POINTER(srealloc(p265,17););
printStats();
void* p425 = last_address;
PRINT_POINTER(srealloc(p237,117););
printStats();
void* p426 = last_address;
PRINT_POINTER(smalloc(140););
printStats();
void* p427 = last_address;
PRINT_POINTER(srealloc(p400,249););
printStats();
void* p428 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p429 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p430 = last_address;
DEBUG_PRINT(sfree(p403););
printStats();
PRINT_POINTER(scalloc(2,170););
printStats();
void* p431 = last_address;
DEBUG_PRINT(sfree(p422););
printStats();
PRINT_POINTER(srealloc(p289,53););
printStats();
void* p432 = last_address;
PRINT_POINTER(srealloc(p431,3););
printStats();
void* p433 = last_address;
DEBUG_PRINT(sfree(p379););
printStats();
DEBUG_PRINT(sfree(p219););
printStats();
PRINT_POINTER(smalloc(70););
printStats();
void* p434 = last_address;
PRINT_POINTER(smalloc(126););
printStats();
void* p435 = last_address;
DEBUG_PRINT(sfree(p352););
printStats();
DEBUG_PRINT(sfree(p269););
printStats();
DEBUG_PRINT(sfree(p156););
printStats();
PRINT_POINTER(srealloc(p351,145););
printStats();
void* p436 = last_address;
PRINT_POINTER(srealloc(p397,35););
printStats();
void* p437 = last_address;
PRINT_POINTER(srealloc(p90,47););
printStats();
void* p438 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p439 = last_address;
PRINT_POINTER(srealloc(p420,145););
printStats();
void* p440 = last_address;
PRINT_POINTER(srealloc(p390,84););
printStats();
void* p441 = last_address;
PRINT_POINTER(srealloc(p330,11););
printStats();
void* p442 = last_address;
PRINT_POINTER(srealloc(p131,239););
printStats();
void* p443 = last_address;
DEBUG_PRINT(sfree(p414););
printStats();
PRINT_POINTER(srealloc(p245,143););
printStats();
void* p444 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p445 = last_address;
PRINT_POINTER(scalloc(174,192););
printStats();
void* p446 = last_address;
DEBUG_PRINT(sfree(p312););
printStats();
PRINT_POINTER(smalloc(190););
printStats();
void* p447 = last_address;
}
