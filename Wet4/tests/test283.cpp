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
                        PRINT_POINTER(smalloc(125););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(smalloc(166););
printStats();
void* p1 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(20,113););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(smalloc(218););
printStats();
void* p4 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p5 = last_address;
PRINT_POINTER(smalloc(205););
printStats();
void* p6 = last_address;
PRINT_POINTER(srealloc(p2,78););
printStats();
void* p7 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(smalloc(84););
printStats();
void* p8 = last_address;
PRINT_POINTER(smalloc(246););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(59););
printStats();
void* p10 = last_address;
PRINT_POINTER(srealloc(p8,63););
printStats();
void* p11 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(srealloc(p11,48););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p10,190););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(83,227););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(102););
printStats();
void* p15 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p16 = last_address;
PRINT_POINTER(scalloc(122,112););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p13,40););
printStats();
void* p18 = last_address;
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(scalloc(238,232););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(194,118););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(168,213););
printStats();
void* p21 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(srealloc(p21,156););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p16,116););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p24,28););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(184););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(smalloc(180););
printStats();
void* p27 = last_address;
PRINT_POINTER(scalloc(70,238););
printStats();
void* p28 = last_address;
PRINT_POINTER(smalloc(190););
printStats();
void* p29 = last_address;
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(scalloc(192,72););
printStats();
void* p30 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(smalloc(26););
printStats();
void* p31 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(smalloc(202););
printStats();
void* p32 = last_address;
PRINT_POINTER(srealloc(p31,237););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(194,48););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p6,168););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(158,32););
printStats();
void* p38 = last_address;
PRINT_POINTER(srealloc(p28,218););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(216,240););
printStats();
void* p40 = last_address;
PRINT_POINTER(smalloc(81););
printStats();
void* p41 = last_address;
PRINT_POINTER(srealloc(p20,158););
printStats();
void* p42 = last_address;
PRINT_POINTER(scalloc(14,17););
printStats();
void* p43 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(srealloc(p43,115););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(192););
printStats();
void* p45 = last_address;
PRINT_POINTER(scalloc(146,183););
printStats();
void* p46 = last_address;
PRINT_POINTER(scalloc(112,22););
printStats();
void* p47 = last_address;
PRINT_POINTER(scalloc(183,185););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p41,6););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(scalloc(85,184););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(srealloc(p40,98););
printStats();
void* p51 = last_address;
PRINT_POINTER(srealloc(p38,105););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(177,58););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(srealloc(p50,104););
printStats();
void* p54 = last_address;
PRINT_POINTER(scalloc(57,189););
printStats();
void* p55 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(217,207););
printStats();
void* p57 = last_address;
PRINT_POINTER(srealloc(p55,140););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(smalloc(151););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p37,246););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p26,3););
printStats();
void* p62 = last_address;
PRINT_POINTER(smalloc(36););
printStats();
void* p63 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(16,233););
printStats();
void* p64 = last_address;
PRINT_POINTER(scalloc(231,217););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p53,58););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p36,182););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p63,214););
printStats();
void* p68 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p58););
printStats();
PRINT_POINTER(smalloc(31););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(178););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(78,162););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(223););
printStats();
void* p73 = last_address;
PRINT_POINTER(smalloc(54););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p74,38););
printStats();
void* p75 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p76 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(scalloc(158,23););
printStats();
void* p77 = last_address;
PRINT_POINTER(srealloc(p61,93););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(scalloc(128,232););
printStats();
void* p79 = last_address;
PRINT_POINTER(srealloc(p29,123););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p25,69););
printStats();
void* p82 = last_address;
PRINT_POINTER(scalloc(131,31););
printStats();
void* p83 = last_address;
PRINT_POINTER(scalloc(207,177););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(3,246););
printStats();
void* p85 = last_address;
PRINT_POINTER(smalloc(143););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(84,23););
printStats();
void* p87 = last_address;
PRINT_POINTER(scalloc(21,80););
printStats();
void* p88 = last_address;
PRINT_POINTER(srealloc(p65,139););
printStats();
void* p89 = last_address;
PRINT_POINTER(srealloc(p85,55););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p91 = last_address;
PRINT_POINTER(smalloc(57););
printStats();
void* p92 = last_address;
PRINT_POINTER(smalloc(180););
printStats();
void* p93 = last_address;
PRINT_POINTER(srealloc(p69,104););
printStats();
void* p94 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p95 = last_address;
PRINT_POINTER(scalloc(32,77););
printStats();
void* p96 = last_address;
PRINT_POINTER(scalloc(65,247););
printStats();
void* p97 = last_address;
PRINT_POINTER(smalloc(89););
printStats();
void* p98 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
PRINT_POINTER(srealloc(p52,147););
printStats();
void* p99 = last_address;
PRINT_POINTER(srealloc(p87,101););
printStats();
void* p100 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(scalloc(127,137););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(75,16););
printStats();
void* p102 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p103 = last_address;
PRINT_POINTER(scalloc(63,72););
printStats();
void* p104 = last_address;
PRINT_POINTER(scalloc(186,39););
printStats();
void* p105 = last_address;
PRINT_POINTER(smalloc(31););
printStats();
void* p106 = last_address;
PRINT_POINTER(srealloc(p59,193););
printStats();
void* p107 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(scalloc(86,92););
printStats();
void* p108 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p109 = last_address;
PRINT_POINTER(scalloc(229,129););
printStats();
void* p110 = last_address;
PRINT_POINTER(srealloc(p72,78););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(smalloc(163););
printStats();
void* p112 = last_address;
PRINT_POINTER(srealloc(p109,206););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p114 = last_address;
PRINT_POINTER(srealloc(p83,239););
printStats();
void* p115 = last_address;
PRINT_POINTER(smalloc(114););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(131););
printStats();
void* p117 = last_address;
PRINT_POINTER(smalloc(115););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(srealloc(p108,179););
printStats();
void* p119 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(smalloc(116););
printStats();
void* p120 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p121 = last_address;
PRINT_POINTER(smalloc(49););
printStats();
void* p122 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(scalloc(16,120););
printStats();
void* p123 = last_address;
PRINT_POINTER(scalloc(186,105););
printStats();
void* p124 = last_address;
PRINT_POINTER(srealloc(p107,181););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(scalloc(138,6););
printStats();
void* p126 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
PRINT_POINTER(smalloc(192););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p104););
printStats();
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(smalloc(122););
printStats();
void* p128 = last_address;
PRINT_POINTER(scalloc(117,193););
printStats();
void* p129 = last_address;
PRINT_POINTER(srealloc(p129,86););
printStats();
void* p130 = last_address;
PRINT_POINTER(srealloc(p45,22););
printStats();
void* p131 = last_address;
DEBUG_PRINT(sfree(p128););
printStats();
PRINT_POINTER(scalloc(149,248););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(16););
printStats();
void* p133 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p134););
printStats();
DEBUG_PRINT(sfree(p124););
printStats();
DEBUG_PRINT(sfree(p19););
printStats();
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(smalloc(13););
printStats();
void* p135 = last_address;
PRINT_POINTER(smalloc(72););
printStats();
void* p136 = last_address;
PRINT_POINTER(srealloc(p94,221););
printStats();
void* p137 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(scalloc(161,245););
printStats();
void* p138 = last_address;
PRINT_POINTER(srealloc(p84,56););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(53,173););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p141 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p127,146););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(smalloc(178););
printStats();
void* p144 = last_address;
PRINT_POINTER(srealloc(p105,187););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p113,51););
printStats();
void* p146 = last_address;
PRINT_POINTER(srealloc(p46,199););
printStats();
void* p147 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p148 = last_address;
PRINT_POINTER(srealloc(p115,1););
printStats();
void* p149 = last_address;
DEBUG_PRINT(sfree(p93););
printStats();
PRINT_POINTER(smalloc(83););
printStats();
void* p150 = last_address;
PRINT_POINTER(srealloc(p136,114););
printStats();
void* p151 = last_address;
PRINT_POINTER(srealloc(p71,239););
printStats();
void* p152 = last_address;
PRINT_POINTER(scalloc(37,20););
printStats();
void* p153 = last_address;
PRINT_POINTER(scalloc(53,176););
printStats();
void* p154 = last_address;
PRINT_POINTER(srealloc(p138,174););
printStats();
void* p155 = last_address;
PRINT_POINTER(scalloc(96,180););
printStats();
void* p156 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(smalloc(43););
printStats();
void* p157 = last_address;
PRINT_POINTER(srealloc(p81,103););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(152,203););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p48,191););
printStats();
void* p160 = last_address;
PRINT_POINTER(scalloc(116,142););
printStats();
void* p161 = last_address;
PRINT_POINTER(smalloc(104););
printStats();
void* p162 = last_address;
PRINT_POINTER(scalloc(234,84););
printStats();
void* p163 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(scalloc(30,53););
printStats();
void* p164 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(srealloc(p146,219););
printStats();
void* p165 = last_address;
PRINT_POINTER(scalloc(154,35););
printStats();
void* p166 = last_address;
PRINT_POINTER(srealloc(p156,49););
printStats();
void* p167 = last_address;
PRINT_POINTER(scalloc(45,46););
printStats();
void* p168 = last_address;
PRINT_POINTER(smalloc(193););
printStats();
void* p169 = last_address;
PRINT_POINTER(scalloc(160,128););
printStats();
void* p170 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p171 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(smalloc(147););
printStats();
void* p172 = last_address;
PRINT_POINTER(scalloc(6,112););
printStats();
void* p173 = last_address;
PRINT_POINTER(scalloc(25,6););
printStats();
void* p174 = last_address;
PRINT_POINTER(srealloc(p49,94););
printStats();
void* p175 = last_address;
PRINT_POINTER(scalloc(81,228););
printStats();
void* p176 = last_address;
DEBUG_PRINT(sfree(p172););
printStats();
PRINT_POINTER(scalloc(108,156););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p147););
printStats();
PRINT_POINTER(scalloc(176,58););
printStats();
void* p178 = last_address;
PRINT_POINTER(smalloc(172););
printStats();
void* p179 = last_address;
PRINT_POINTER(srealloc(p126,152););
printStats();
void* p180 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(srealloc(p14,212););
printStats();
void* p181 = last_address;
PRINT_POINTER(scalloc(32,148););
printStats();
void* p182 = last_address;
PRINT_POINTER(scalloc(42,189););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(204,130););
printStats();
void* p184 = last_address;
PRINT_POINTER(scalloc(200,187););
printStats();
void* p185 = last_address;
DEBUG_PRINT(sfree(p174););
printStats();
PRINT_POINTER(scalloc(175,51););
printStats();
void* p186 = last_address;
PRINT_POINTER(srealloc(p54,243););
printStats();
void* p187 = last_address;
PRINT_POINTER(srealloc(p167,220););
printStats();
void* p188 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p189 = last_address;
DEBUG_PRINT(sfree(p175););
printStats();
PRINT_POINTER(srealloc(p132,182););
printStats();
void* p190 = last_address;
DEBUG_PRINT(sfree(p176););
printStats();
PRINT_POINTER(scalloc(118,131););
printStats();
void* p191 = last_address;
DEBUG_PRINT(sfree(p121););
printStats();
PRINT_POINTER(smalloc(65););
printStats();
void* p192 = last_address;
DEBUG_PRINT(sfree(p139););
printStats();
DEBUG_PRINT(sfree(p181););
printStats();
PRINT_POINTER(scalloc(108,78););
printStats();
void* p193 = last_address;
DEBUG_PRINT(sfree(p165););
printStats();
DEBUG_PRINT(sfree(p186););
printStats();
PRINT_POINTER(srealloc(p144,132););
printStats();
void* p194 = last_address;
PRINT_POINTER(smalloc(59););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p102,137););
printStats();
void* p196 = last_address;
PRINT_POINTER(scalloc(102,234););
printStats();
void* p197 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
DEBUG_PRINT(sfree(p142););
printStats();
DEBUG_PRINT(sfree(p119););
printStats();
PRINT_POINTER(scalloc(82,172););
printStats();
void* p198 = last_address;
PRINT_POINTER(scalloc(48,83););
printStats();
void* p199 = last_address;
PRINT_POINTER(smalloc(136););
printStats();
void* p200 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
PRINT_POINTER(srealloc(p162,161););
printStats();
void* p201 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(srealloc(p153,246););
printStats();
void* p202 = last_address;
PRINT_POINTER(scalloc(73,100););
printStats();
void* p203 = last_address;
PRINT_POINTER(smalloc(226););
printStats();
void* p204 = last_address;
PRINT_POINTER(srealloc(p187,168););
printStats();
void* p205 = last_address;
DEBUG_PRINT(sfree(p200););
printStats();
PRINT_POINTER(srealloc(p143,15););
printStats();
void* p206 = last_address;
DEBUG_PRINT(sfree(p150););
printStats();
DEBUG_PRINT(sfree(p120););
printStats();
PRINT_POINTER(scalloc(74,136););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p92,92););
printStats();
void* p208 = last_address;
PRINT_POINTER(scalloc(107,176););
printStats();
void* p209 = last_address;
PRINT_POINTER(srealloc(p205,172););
printStats();
void* p210 = last_address;
PRINT_POINTER(scalloc(206,27););
printStats();
void* p211 = last_address;
DEBUG_PRINT(sfree(p193););
printStats();
DEBUG_PRINT(sfree(p180););
printStats();
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(scalloc(43,142););
printStats();
void* p212 = last_address;
PRINT_POINTER(srealloc(p158,56););
printStats();
void* p213 = last_address;
DEBUG_PRINT(sfree(p149););
printStats();
DEBUG_PRINT(sfree(p185););
printStats();
PRINT_POINTER(smalloc(162););
printStats();
void* p214 = last_address;
PRINT_POINTER(srealloc(p191,91););
printStats();
void* p215 = last_address;
DEBUG_PRINT(sfree(p154););
printStats();
PRINT_POINTER(scalloc(231,230););
printStats();
void* p216 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
DEBUG_PRINT(sfree(p206););
printStats();
DEBUG_PRINT(sfree(p155););
printStats();
PRINT_POINTER(smalloc(136););
printStats();
void* p217 = last_address;
PRINT_POINTER(srealloc(p114,225););
printStats();
void* p218 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(smalloc(238););
printStats();
void* p219 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p220 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p221 = last_address;
PRINT_POINTER(smalloc(147););
printStats();
void* p222 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p207););
printStats();
PRINT_POINTER(smalloc(185););
printStats();
void* p224 = last_address;
PRINT_POINTER(smalloc(186););
printStats();
void* p225 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(srealloc(p204,248););
printStats();
void* p226 = last_address;
PRINT_POINTER(scalloc(55,82););
printStats();
void* p227 = last_address;
PRINT_POINTER(srealloc(p178,12););
printStats();
void* p228 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p229 = last_address;
DEBUG_PRINT(sfree(p190););
printStats();
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(srealloc(p188,195););
printStats();
void* p230 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p231 = last_address;
PRINT_POINTER(scalloc(152,195););
printStats();
void* p232 = last_address;
PRINT_POINTER(scalloc(193,87););
printStats();
void* p233 = last_address;
DEBUG_PRINT(sfree(p70););
printStats();
DEBUG_PRINT(sfree(p209););
printStats();
PRINT_POINTER(smalloc(200););
printStats();
void* p234 = last_address;
PRINT_POINTER(srealloc(p226,55););
printStats();
void* p235 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p236 = last_address;
PRINT_POINTER(srealloc(p214,198););
printStats();
void* p237 = last_address;
PRINT_POINTER(scalloc(124,158););
printStats();
void* p238 = last_address;
PRINT_POINTER(smalloc(60););
printStats();
void* p239 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p240 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p241 = last_address;
PRINT_POINTER(scalloc(41,76););
printStats();
void* p242 = last_address;
PRINT_POINTER(srealloc(p237,239););
printStats();
void* p243 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p244 = last_address;
PRINT_POINTER(srealloc(p211,218););
printStats();
void* p245 = last_address;
PRINT_POINTER(scalloc(160,147););
printStats();
void* p246 = last_address;
PRINT_POINTER(scalloc(25,136););
printStats();
void* p247 = last_address;
PRINT_POINTER(scalloc(177,142););
printStats();
void* p248 = last_address;
PRINT_POINTER(scalloc(119,222););
printStats();
void* p249 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p250 = last_address;
PRINT_POINTER(srealloc(p242,244););
printStats();
void* p251 = last_address;
DEBUG_PRINT(sfree(p88););
printStats();
PRINT_POINTER(srealloc(p90,168););
printStats();
void* p252 = last_address;
PRINT_POINTER(srealloc(p192,131););
printStats();
void* p253 = last_address;
PRINT_POINTER(srealloc(p159,164););
printStats();
void* p254 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
PRINT_POINTER(smalloc(106););
printStats();
void* p255 = last_address;
PRINT_POINTER(smalloc(214););
printStats();
void* p256 = last_address;
PRINT_POINTER(scalloc(154,227););
printStats();
void* p257 = last_address;
PRINT_POINTER(scalloc(230,173););
printStats();
void* p258 = last_address;
DEBUG_PRINT(sfree(p212););
printStats();
PRINT_POINTER(srealloc(p258,248););
printStats();
void* p259 = last_address;
PRINT_POINTER(scalloc(64,15););
printStats();
void* p260 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p261 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p262 = last_address;
PRINT_POINTER(srealloc(p47,193););
printStats();
void* p263 = last_address;
DEBUG_PRINT(sfree(p259););
printStats();
PRINT_POINTER(smalloc(208););
printStats();
void* p264 = last_address;
PRINT_POINTER(scalloc(63,159););
printStats();
void* p265 = last_address;
DEBUG_PRINT(sfree(p195););
printStats();
PRINT_POINTER(scalloc(12,210););
printStats();
void* p266 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p267 = last_address;
PRINT_POINTER(smalloc(0););
printStats();
void* p268 = last_address;
PRINT_POINTER(srealloc(p250,99););
printStats();
void* p269 = last_address;
DEBUG_PRINT(sfree(p220););
printStats();
PRINT_POINTER(smalloc(171););
printStats();
void* p270 = last_address;
PRINT_POINTER(scalloc(62,113););
printStats();
void* p271 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p272 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
DEBUG_PRINT(sfree(p257););
printStats();
PRINT_POINTER(smalloc(21););
printStats();
void* p273 = last_address;
PRINT_POINTER(srealloc(p234,197););
printStats();
void* p274 = last_address;
PRINT_POINTER(scalloc(133,109););
printStats();
void* p275 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p276 = last_address;
PRINT_POINTER(smalloc(158););
printStats();
void* p277 = last_address;
DEBUG_PRINT(sfree(p202););
printStats();
PRINT_POINTER(smalloc(236););
printStats();
void* p278 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p279 = last_address;
PRINT_POINTER(scalloc(96,42););
printStats();
void* p280 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p281 = last_address;
PRINT_POINTER(srealloc(p169,161););
printStats();
void* p282 = last_address;
PRINT_POINTER(srealloc(p276,5););
printStats();
void* p283 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p284 = last_address;
PRINT_POINTER(scalloc(141,48););
printStats();
void* p285 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(srealloc(p218,52););
printStats();
void* p286 = last_address;
PRINT_POINTER(scalloc(75,239););
printStats();
void* p287 = last_address;
PRINT_POINTER(srealloc(p265,212););
printStats();
void* p288 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p289 = last_address;
DEBUG_PRINT(sfree(p208););
printStats();
PRINT_POINTER(scalloc(92,209););
printStats();
void* p290 = last_address;
PRINT_POINTER(srealloc(p216,172););
printStats();
void* p291 = last_address;
DEBUG_PRINT(sfree(p278););
printStats();
DEBUG_PRINT(sfree(p203););
printStats();
PRINT_POINTER(smalloc(216););
printStats();
void* p292 = last_address;
PRINT_POINTER(srealloc(p217,7););
printStats();
void* p293 = last_address;
DEBUG_PRINT(sfree(p277););
printStats();
PRINT_POINTER(smalloc(187););
printStats();
void* p294 = last_address;
PRINT_POINTER(srealloc(p290,91););
printStats();
void* p295 = last_address;
PRINT_POINTER(srealloc(p274,34););
printStats();
void* p296 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p297 = last_address;
PRINT_POINTER(srealloc(p219,221););
printStats();
void* p298 = last_address;
PRINT_POINTER(smalloc(29););
printStats();
void* p299 = last_address;
DEBUG_PRINT(sfree(p238););
printStats();
PRINT_POINTER(srealloc(p275,14););
printStats();
void* p300 = last_address;
PRINT_POINTER(srealloc(p133,125););
printStats();
void* p301 = last_address;
PRINT_POINTER(smalloc(59););
printStats();
void* p302 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(smalloc(97););
printStats();
void* p303 = last_address;
PRINT_POINTER(srealloc(p243,133););
printStats();
void* p304 = last_address;
DEBUG_PRINT(sfree(p304););
printStats();
DEBUG_PRINT(sfree(p279););
printStats();
PRINT_POINTER(smalloc(109););
printStats();
void* p305 = last_address;
DEBUG_PRINT(sfree(p270););
printStats();
PRINT_POINTER(smalloc(133););
printStats();
void* p306 = last_address;
PRINT_POINTER(scalloc(120,29););
printStats();
void* p307 = last_address;
PRINT_POINTER(scalloc(227,42););
printStats();
void* p308 = last_address;
PRINT_POINTER(smalloc(26););
printStats();
void* p309 = last_address;
PRINT_POINTER(smalloc(168););
printStats();
void* p310 = last_address;
PRINT_POINTER(smalloc(200););
printStats();
void* p311 = last_address;
PRINT_POINTER(smalloc(230););
printStats();
void* p312 = last_address;
PRINT_POINTER(smalloc(150););
printStats();
void* p313 = last_address;
PRINT_POINTER(srealloc(p252,139););
printStats();
void* p314 = last_address;
DEBUG_PRINT(sfree(p284););
printStats();
PRINT_POINTER(scalloc(166,35););
printStats();
void* p315 = last_address;
PRINT_POINTER(scalloc(223,58););
printStats();
void* p316 = last_address;
PRINT_POINTER(scalloc(139,25););
printStats();
void* p317 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(smalloc(35););
printStats();
void* p318 = last_address;
DEBUG_PRINT(sfree(p60););
printStats();
DEBUG_PRINT(sfree(p292););
printStats();
DEBUG_PRINT(sfree(p307););
printStats();
PRINT_POINTER(smalloc(71););
printStats();
void* p319 = last_address;
PRINT_POINTER(srealloc(p302,80););
printStats();
void* p320 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p321 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p322 = last_address;
PRINT_POINTER(srealloc(p285,84););
printStats();
void* p323 = last_address;
PRINT_POINTER(smalloc(59););
printStats();
void* p324 = last_address;
DEBUG_PRINT(sfree(p319););
printStats();
DEBUG_PRINT(sfree(p322););
printStats();
DEBUG_PRINT(sfree(p56););
printStats();
DEBUG_PRINT(sfree(p273););
printStats();
PRINT_POINTER(srealloc(p318,212););
printStats();
void* p325 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p326 = last_address;
PRINT_POINTER(smalloc(26););
printStats();
void* p327 = last_address;
PRINT_POINTER(smalloc(177););
printStats();
void* p328 = last_address;
DEBUG_PRINT(sfree(p286););
printStats();
PRINT_POINTER(srealloc(p288,116););
printStats();
void* p329 = last_address;
PRINT_POINTER(srealloc(p300,204););
printStats();
void* p330 = last_address;
PRINT_POINTER(scalloc(21,42););
printStats();
void* p331 = last_address;
DEBUG_PRINT(sfree(p327););
printStats();
PRINT_POINTER(scalloc(121,222););
printStats();
void* p332 = last_address;
DEBUG_PRINT(sfree(p223););
printStats();
DEBUG_PRINT(sfree(p171););
printStats();
DEBUG_PRINT(sfree(p301););
printStats();
DEBUG_PRINT(sfree(p328););
printStats();
PRINT_POINTER(scalloc(184,171););
printStats();
void* p333 = last_address;
PRINT_POINTER(smalloc(44););
printStats();
void* p334 = last_address;
PRINT_POINTER(scalloc(191,239););
printStats();
void* p335 = last_address;
PRINT_POINTER(scalloc(222,196););
printStats();
void* p336 = last_address;
PRINT_POINTER(srealloc(p253,130););
printStats();
void* p337 = last_address;
PRINT_POINTER(scalloc(54,4););
printStats();
void* p338 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p339 = last_address;
DEBUG_PRINT(sfree(p306););
printStats();
DEBUG_PRINT(sfree(p266););
printStats();
PRINT_POINTER(srealloc(p227,63););
printStats();
void* p340 = last_address;
DEBUG_PRINT(sfree(p293););
printStats();
PRINT_POINTER(smalloc(5););
printStats();
void* p341 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
DEBUG_PRINT(sfree(p295););
printStats();
PRINT_POINTER(scalloc(181,12););
printStats();
void* p342 = last_address;
DEBUG_PRINT(sfree(p282););
printStats();
DEBUG_PRINT(sfree(p221););
printStats();
PRINT_POINTER(smalloc(127););
printStats();
void* p343 = last_address;
PRINT_POINTER(smalloc(148););
printStats();
void* p344 = last_address;
DEBUG_PRINT(sfree(p229););
printStats();
PRINT_POINTER(scalloc(8,159););
printStats();
void* p345 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p346 = last_address;
PRINT_POINTER(smalloc(234););
printStats();
void* p347 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p348 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p349 = last_address;
PRINT_POINTER(srealloc(p341,113););
printStats();
void* p350 = last_address;
PRINT_POINTER(smalloc(177););
printStats();
void* p351 = last_address;
PRINT_POINTER(scalloc(24,157););
printStats();
void* p352 = last_address;
DEBUG_PRINT(sfree(p331););
printStats();
PRINT_POINTER(smalloc(148););
printStats();
void* p353 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p354 = last_address;
PRINT_POINTER(srealloc(p312,150););
printStats();
void* p355 = last_address;
PRINT_POINTER(srealloc(p233,129););
printStats();
void* p356 = last_address;
DEBUG_PRINT(sfree(p263););
printStats();
DEBUG_PRINT(sfree(p299););
printStats();
PRINT_POINTER(srealloc(p291,208););
printStats();
void* p357 = last_address;
PRINT_POINTER(smalloc(6););
printStats();
void* p358 = last_address;
DEBUG_PRINT(sfree(p261););
printStats();
DEBUG_PRINT(sfree(p283););
printStats();
DEBUG_PRINT(sfree(p151););
printStats();
PRINT_POINTER(srealloc(p260,61););
printStats();
void* p359 = last_address;
PRINT_POINTER(srealloc(p189,242););
printStats();
void* p360 = last_address;
DEBUG_PRINT(sfree(p110););
printStats();
PRINT_POINTER(srealloc(p157,109););
printStats();
void* p361 = last_address;
PRINT_POINTER(scalloc(238,59););
printStats();
void* p362 = last_address;
PRINT_POINTER(scalloc(83,160););
printStats();
void* p363 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p364 = last_address;
PRINT_POINTER(smalloc(35););
printStats();
void* p365 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p366 = last_address;
PRINT_POINTER(scalloc(24,111););
printStats();
void* p367 = last_address;
PRINT_POINTER(smalloc(151););
printStats();
void* p368 = last_address;
DEBUG_PRINT(sfree(p239););
printStats();
PRINT_POINTER(scalloc(3,57););
printStats();
void* p369 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p370 = last_address;
PRINT_POINTER(smalloc(89););
printStats();
void* p371 = last_address;
PRINT_POINTER(smalloc(32););
printStats();
void* p372 = last_address;
PRINT_POINTER(srealloc(p73,113););
printStats();
void* p373 = last_address;
PRINT_POINTER(scalloc(129,53););
printStats();
void* p374 = last_address;
PRINT_POINTER(smalloc(220););
printStats();
void* p375 = last_address;
DEBUG_PRINT(sfree(p320););
printStats();
PRINT_POINTER(srealloc(p357,183););
printStats();
void* p376 = last_address;
DEBUG_PRINT(sfree(p351););
printStats();
DEBUG_PRINT(sfree(p333););
printStats();
PRINT_POINTER(srealloc(p353,101););
printStats();
void* p377 = last_address;
DEBUG_PRINT(sfree(p366););
printStats();
PRINT_POINTER(scalloc(39,48););
printStats();
void* p378 = last_address;
DEBUG_PRINT(sfree(p262););
printStats();
PRINT_POINTER(smalloc(211););
printStats();
void* p379 = last_address;
PRINT_POINTER(scalloc(49,244););
printStats();
void* p380 = last_address;
PRINT_POINTER(srealloc(p380,20););
printStats();
void* p381 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p382 = last_address;
PRINT_POINTER(srealloc(p231,51););
printStats();
void* p383 = last_address;
DEBUG_PRINT(sfree(p313););
printStats();
PRINT_POINTER(scalloc(249,83););
printStats();
void* p384 = last_address;
PRINT_POINTER(scalloc(143,16););
printStats();
void* p385 = last_address;
PRINT_POINTER(scalloc(29,30););
printStats();
void* p386 = last_address;
PRINT_POINTER(srealloc(p309,162););
printStats();
void* p387 = last_address;
PRINT_POINTER(scalloc(159,165););
printStats();
void* p388 = last_address;
PRINT_POINTER(scalloc(42,176););
printStats();
void* p389 = last_address;
DEBUG_PRINT(sfree(p376););
printStats();
PRINT_POINTER(smalloc(91););
printStats();
void* p390 = last_address;
PRINT_POINTER(scalloc(146,67););
printStats();
void* p391 = last_address;
PRINT_POINTER(srealloc(p372,175););
printStats();
void* p392 = last_address;
PRINT_POINTER(scalloc(3,98););
printStats();
void* p393 = last_address;
PRINT_POINTER(srealloc(p287,56););
printStats();
void* p394 = last_address;
PRINT_POINTER(srealloc(p251,205););
printStats();
void* p395 = last_address;
PRINT_POINTER(srealloc(p222,89););
printStats();
void* p396 = last_address;
DEBUG_PRINT(sfree(p355););
printStats();
PRINT_POINTER(scalloc(165,110););
printStats();
void* p397 = last_address;
DEBUG_PRINT(sfree(p344););
printStats();
PRINT_POINTER(scalloc(111,98););
printStats();
void* p398 = last_address;
PRINT_POINTER(scalloc(146,103););
printStats();
void* p399 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p400 = last_address;
DEBUG_PRINT(sfree(p334););
printStats();
PRINT_POINTER(srealloc(p201,209););
printStats();
void* p401 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p402 = last_address;
DEBUG_PRINT(sfree(p164););
printStats();
PRINT_POINTER(smalloc(228););
printStats();
void* p403 = last_address;
PRINT_POINTER(smalloc(28););
printStats();
void* p404 = last_address;
DEBUG_PRINT(sfree(p246););
printStats();
PRINT_POINTER(scalloc(114,115););
printStats();
void* p405 = last_address;
PRINT_POINTER(scalloc(21,77););
printStats();
void* p406 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p407 = last_address;
PRINT_POINTER(smalloc(82););
printStats();
void* p408 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p409 = last_address;
PRINT_POINTER(scalloc(226,128););
printStats();
void* p410 = last_address;
DEBUG_PRINT(sfree(p215););
printStats();
PRINT_POINTER(scalloc(174,188););
printStats();
void* p411 = last_address;
DEBUG_PRINT(sfree(p141););
printStats();
PRINT_POINTER(srealloc(p298,39););
printStats();
void* p412 = last_address;
PRINT_POINTER(smalloc(226););
printStats();
void* p413 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p414 = last_address;
PRINT_POINTER(srealloc(p375,136););
printStats();
void* p415 = last_address;
PRINT_POINTER(scalloc(36,229););
printStats();
void* p416 = last_address;
PRINT_POINTER(smalloc(30););
printStats();
void* p417 = last_address;
DEBUG_PRINT(sfree(p412););
printStats();
PRINT_POINTER(smalloc(209););
printStats();
void* p418 = last_address;
DEBUG_PRINT(sfree(p352););
printStats();
DEBUG_PRINT(sfree(p383););
printStats();
DEBUG_PRINT(sfree(p321););
printStats();
DEBUG_PRINT(sfree(p349););
printStats();
PRINT_POINTER(scalloc(177,199););
printStats();
void* p419 = last_address;
PRINT_POINTER(scalloc(59,132););
printStats();
void* p420 = last_address;
PRINT_POINTER(scalloc(239,15););
printStats();
void* p421 = last_address;
PRINT_POINTER(scalloc(246,100););
printStats();
void* p422 = last_address;
DEBUG_PRINT(sfree(p236););
printStats();
PRINT_POINTER(srealloc(p354,132););
printStats();
void* p423 = last_address;
DEBUG_PRINT(sfree(p173););
printStats();
DEBUG_PRINT(sfree(p329););
printStats();
PRINT_POINTER(srealloc(p232,108););
printStats();
void* p424 = last_address;
PRINT_POINTER(scalloc(229,233););
printStats();
void* p425 = last_address;
PRINT_POINTER(scalloc(154,159););
printStats();
void* p426 = last_address;
PRINT_POINTER(scalloc(160,248););
printStats();
void* p427 = last_address;
PRINT_POINTER(srealloc(p213,203););
printStats();
void* p428 = last_address;
DEBUG_PRINT(sfree(p182););
printStats();
PRINT_POINTER(smalloc(153););
printStats();
void* p429 = last_address;
PRINT_POINTER(srealloc(p148,15););
printStats();
void* p430 = last_address;
PRINT_POINTER(srealloc(p427,204););
printStats();
void* p431 = last_address;
DEBUG_PRINT(sfree(p367););
printStats();
DEBUG_PRINT(sfree(p269););
printStats();
PRINT_POINTER(smalloc(199););
printStats();
void* p432 = last_address;
PRINT_POINTER(scalloc(231,29););
printStats();
void* p433 = last_address;
PRINT_POINTER(srealloc(p342,91););
printStats();
void* p434 = last_address;
DEBUG_PRINT(sfree(p289););
printStats();
PRINT_POINTER(srealloc(p424,84););
printStats();
void* p435 = last_address;
PRINT_POINTER(scalloc(221,86););
printStats();
void* p436 = last_address;
PRINT_POINTER(scalloc(62,13););
printStats();
void* p437 = last_address;
DEBUG_PRINT(sfree(p382););
printStats();
PRINT_POINTER(scalloc(190,124););
printStats();
void* p438 = last_address;
PRINT_POINTER(scalloc(98,155););
printStats();
void* p439 = last_address;
PRINT_POINTER(srealloc(p338,165););
printStats();
void* p440 = last_address;
DEBUG_PRINT(sfree(p303););
printStats();
PRINT_POINTER(scalloc(81,100););
printStats();
void* p441 = last_address;
PRINT_POINTER(srealloc(p272,16););
printStats();
void* p442 = last_address;
}
