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
                        PRINT_POINTER(smalloc(15););
printStats();
void* p0 = last_address;
PRINT_POINTER(srealloc(p0,68););
printStats();
void* p1 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(225,56););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(smalloc(7););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(scalloc(197,124););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p1,179););
printStats();
void* p6 = last_address;
PRINT_POINTER(smalloc(14););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(246,124););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(101););
printStats();
void* p10 = last_address;
PRINT_POINTER(srealloc(p5,127););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p10,200););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
DEBUG_PRINT(sfree(p8););
printStats();
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(scalloc(91,230););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(18,185););
printStats();
void* p14 = last_address;
PRINT_POINTER(srealloc(p12,177););
printStats();
void* p15 = last_address;
PRINT_POINTER(srealloc(p14,210););
printStats();
void* p16 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(smalloc(27););
printStats();
void* p17 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p18 = last_address;
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(srealloc(p13,150););
printStats();
void* p19 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(srealloc(p11,225););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(137,139););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(60,107););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(smalloc(14););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(60,225););
printStats();
void* p24 = last_address;
PRINT_POINTER(srealloc(p22,234););
printStats();
void* p25 = last_address;
PRINT_POINTER(scalloc(166,213););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p23,219););
printStats();
void* p27 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(scalloc(61,141););
printStats();
void* p28 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(scalloc(156,173););
printStats();
void* p29 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(smalloc(99););
printStats();
void* p30 = last_address;
PRINT_POINTER(srealloc(p26,58););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p31,46););
printStats();
void* p32 = last_address;
PRINT_POINTER(srealloc(p29,206););
printStats();
void* p33 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(srealloc(p28,148););
printStats();
void* p34 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(scalloc(154,139););
printStats();
void* p35 = last_address;
PRINT_POINTER(srealloc(p35,248););
printStats();
void* p36 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p19););
printStats();
DEBUG_PRINT(sfree(p24););
printStats();
PRINT_POINTER(srealloc(p25,203););
printStats();
void* p37 = last_address;
PRINT_POINTER(srealloc(p37,230););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(97););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(17,222););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(srealloc(p39,24););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(133,115););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p43 = last_address;
PRINT_POINTER(scalloc(149,146););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p42,149););
printStats();
void* p45 = last_address;
PRINT_POINTER(scalloc(147,205););
printStats();
void* p46 = last_address;
PRINT_POINTER(scalloc(106,13););
printStats();
void* p47 = last_address;
PRINT_POINTER(srealloc(p40,15););
printStats();
void* p48 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(srealloc(p44,50););
printStats();
void* p49 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(smalloc(143););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(156,208););
printStats();
void* p52 = last_address;
DEBUG_PRINT(sfree(p47););
printStats();
PRINT_POINTER(srealloc(p49,206););
printStats();
void* p53 = last_address;
PRINT_POINTER(scalloc(235,56););
printStats();
void* p54 = last_address;
PRINT_POINTER(scalloc(114,198););
printStats();
void* p55 = last_address;
PRINT_POINTER(smalloc(120););
printStats();
void* p56 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p57 = last_address;
PRINT_POINTER(smalloc(185););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(scalloc(60,148););
printStats();
void* p59 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p60 = last_address;
DEBUG_PRINT(sfree(p43););
printStats();
PRINT_POINTER(srealloc(p59,140););
printStats();
void* p61 = last_address;
PRINT_POINTER(scalloc(8,80););
printStats();
void* p62 = last_address;
PRINT_POINTER(srealloc(p58,242););
printStats();
void* p63 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(srealloc(p60,165););
printStats();
void* p64 = last_address;
PRINT_POINTER(smalloc(156););
printStats();
void* p65 = last_address;
PRINT_POINTER(scalloc(17,173););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(190););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p50,233););
printStats();
void* p68 = last_address;
PRINT_POINTER(scalloc(192,210););
printStats();
void* p69 = last_address;
PRINT_POINTER(scalloc(147,64););
printStats();
void* p70 = last_address;
PRINT_POINTER(scalloc(160,164););
printStats();
void* p71 = last_address;
PRINT_POINTER(srealloc(p70,22););
printStats();
void* p72 = last_address;
PRINT_POINTER(srealloc(p72,106););
printStats();
void* p73 = last_address;
PRINT_POINTER(scalloc(116,181););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(171););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(56,3););
printStats();
void* p76 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(srealloc(p55,233););
printStats();
void* p77 = last_address;
PRINT_POINTER(scalloc(193,94););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(srealloc(p48,65););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(73,41););
printStats();
void* p80 = last_address;
PRINT_POINTER(srealloc(p66,42););
printStats();
void* p81 = last_address;
DEBUG_PRINT(sfree(p53););
printStats();
DEBUG_PRINT(sfree(p41););
printStats();
DEBUG_PRINT(sfree(p65););
printStats();
PRINT_POINTER(srealloc(p62,160););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p83 = last_address;
PRINT_POINTER(srealloc(p77,27););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(243););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(scalloc(220,76););
printStats();
void* p86 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(smalloc(214););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(139););
printStats();
void* p89 = last_address;
PRINT_POINTER(scalloc(51,26););
printStats();
void* p90 = last_address;
PRINT_POINTER(scalloc(227,3););
printStats();
void* p91 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p92 = last_address;
DEBUG_PRINT(sfree(p71););
printStats();
PRINT_POINTER(smalloc(32););
printStats();
void* p93 = last_address;
PRINT_POINTER(scalloc(88,33););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(srealloc(p79,33););
printStats();
void* p95 = last_address;
PRINT_POINTER(smalloc(182););
printStats();
void* p96 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p97 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
DEBUG_PRINT(sfree(p85););
printStats();
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(scalloc(58,116););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(46,76););
printStats();
void* p99 = last_address;
PRINT_POINTER(srealloc(p92,211););
printStats();
void* p100 = last_address;
PRINT_POINTER(smalloc(3););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(16,41););
printStats();
void* p102 = last_address;
PRINT_POINTER(scalloc(188,240););
printStats();
void* p103 = last_address;
PRINT_POINTER(srealloc(p78,16););
printStats();
void* p104 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(srealloc(p56,91););
printStats();
void* p105 = last_address;
PRINT_POINTER(srealloc(p68,73););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(28,61););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p100,104););
printStats();
void* p108 = last_address;
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(srealloc(p105,41););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(smalloc(164););
printStats();
void* p110 = last_address;
PRINT_POINTER(scalloc(30,218););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p107,126););
printStats();
void* p112 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p113 = last_address;
PRINT_POINTER(smalloc(68););
printStats();
void* p114 = last_address;
DEBUG_PRINT(sfree(p99););
printStats();
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(scalloc(27,133););
printStats();
void* p115 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p116 = last_address;
PRINT_POINTER(scalloc(183,203););
printStats();
void* p117 = last_address;
PRINT_POINTER(scalloc(145,162););
printStats();
void* p118 = last_address;
PRINT_POINTER(scalloc(119,22););
printStats();
void* p119 = last_address;
PRINT_POINTER(smalloc(116););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(161,153););
printStats();
void* p121 = last_address;
PRINT_POINTER(smalloc(57););
printStats();
void* p122 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
DEBUG_PRINT(sfree(p87););
printStats();
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(scalloc(27,70););
printStats();
void* p123 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
DEBUG_PRINT(sfree(p76););
printStats();
PRINT_POINTER(smalloc(189););
printStats();
void* p124 = last_address;
PRINT_POINTER(srealloc(p113,41););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(srealloc(p111,73););
printStats();
void* p126 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p127 = last_address;
PRINT_POINTER(smalloc(33););
printStats();
void* p128 = last_address;
PRINT_POINTER(srealloc(p115,197););
printStats();
void* p129 = last_address;
PRINT_POINTER(smalloc(5););
printStats();
void* p130 = last_address;
DEBUG_PRINT(sfree(p102););
printStats();
PRINT_POINTER(srealloc(p114,135););
printStats();
void* p131 = last_address;
DEBUG_PRINT(sfree(p106););
printStats();
PRINT_POINTER(smalloc(112););
printStats();
void* p132 = last_address;
PRINT_POINTER(srealloc(p81,174););
printStats();
void* p133 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
PRINT_POINTER(scalloc(213,84););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(scalloc(180,20););
printStats();
void* p135 = last_address;
PRINT_POINTER(srealloc(p88,49););
printStats();
void* p136 = last_address;
DEBUG_PRINT(sfree(p131););
printStats();
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(srealloc(p110,122););
printStats();
void* p137 = last_address;
PRINT_POINTER(srealloc(p129,42););
printStats();
void* p138 = last_address;
PRINT_POINTER(srealloc(p126,35););
printStats();
void* p139 = last_address;
PRINT_POINTER(smalloc(226););
printStats();
void* p140 = last_address;
PRINT_POINTER(srealloc(p128,117););
printStats();
void* p141 = last_address;
DEBUG_PRINT(sfree(p118););
printStats();
PRINT_POINTER(srealloc(p80,30););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p96,100););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(srealloc(p108,183););
printStats();
void* p144 = last_address;
PRINT_POINTER(srealloc(p104,104););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p144,177););
printStats();
void* p146 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(171,4););
printStats();
void* p148 = last_address;
PRINT_POINTER(smalloc(51););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p84,48););
printStats();
void* p150 = last_address;
PRINT_POINTER(srealloc(p146,195););
printStats();
void* p151 = last_address;
PRINT_POINTER(smalloc(152););
printStats();
void* p152 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
PRINT_POINTER(srealloc(p147,176););
printStats();
void* p153 = last_address;
PRINT_POINTER(smalloc(186););
printStats();
void* p154 = last_address;
PRINT_POINTER(smalloc(149););
printStats();
void* p155 = last_address;
PRINT_POINTER(scalloc(238,114););
printStats();
void* p156 = last_address;
PRINT_POINTER(scalloc(2,114););
printStats();
void* p157 = last_address;
PRINT_POINTER(srealloc(p135,235););
printStats();
void* p158 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(srealloc(p138,200););
printStats();
void* p159 = last_address;
PRINT_POINTER(srealloc(p63,229););
printStats();
void* p160 = last_address;
PRINT_POINTER(smalloc(36););
printStats();
void* p161 = last_address;
PRINT_POINTER(smalloc(24););
printStats();
void* p162 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p163 = last_address;
PRINT_POINTER(scalloc(31,218););
printStats();
void* p164 = last_address;
PRINT_POINTER(scalloc(203,179););
printStats();
void* p165 = last_address;
PRINT_POINTER(scalloc(167,104););
printStats();
void* p166 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(smalloc(15););
printStats();
void* p167 = last_address;
PRINT_POINTER(srealloc(p157,139););
printStats();
void* p168 = last_address;
PRINT_POINTER(srealloc(p139,53););
printStats();
void* p169 = last_address;
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(scalloc(11,73););
printStats();
void* p170 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
DEBUG_PRINT(sfree(p161););
printStats();
DEBUG_PRINT(sfree(p150););
printStats();
DEBUG_PRINT(sfree(p141););
printStats();
PRINT_POINTER(scalloc(3,47););
printStats();
void* p171 = last_address;
PRINT_POINTER(scalloc(33,241););
printStats();
void* p172 = last_address;
DEBUG_PRINT(sfree(p164););
printStats();
PRINT_POINTER(srealloc(p125,28););
printStats();
void* p173 = last_address;
DEBUG_PRINT(sfree(p169););
printStats();
PRINT_POINTER(srealloc(p145,92););
printStats();
void* p174 = last_address;
PRINT_POINTER(smalloc(149););
printStats();
void* p175 = last_address;
PRINT_POINTER(scalloc(183,220););
printStats();
void* p176 = last_address;
PRINT_POINTER(smalloc(36););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(srealloc(p153,198););
printStats();
void* p178 = last_address;
DEBUG_PRINT(sfree(p148););
printStats();
DEBUG_PRINT(sfree(p171););
printStats();
DEBUG_PRINT(sfree(p117););
printStats();
DEBUG_PRINT(sfree(p83););
printStats();
PRINT_POINTER(scalloc(115,105););
printStats();
void* p179 = last_address;
PRINT_POINTER(srealloc(p156,101););
printStats();
void* p180 = last_address;
PRINT_POINTER(scalloc(118,94););
printStats();
void* p181 = last_address;
PRINT_POINTER(scalloc(99,90););
printStats();
void* p182 = last_address;
PRINT_POINTER(srealloc(p151,161););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(33,51););
printStats();
void* p184 = last_address;
PRINT_POINTER(srealloc(p121,216););
printStats();
void* p185 = last_address;
PRINT_POINTER(scalloc(57,139););
printStats();
void* p186 = last_address;
PRINT_POINTER(scalloc(28,226););
printStats();
void* p187 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p188 = last_address;
PRINT_POINTER(scalloc(242,183););
printStats();
void* p189 = last_address;
DEBUG_PRINT(sfree(p162););
printStats();
DEBUG_PRINT(sfree(p175););
printStats();
PRINT_POINTER(smalloc(188););
printStats();
void* p190 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p191 = last_address;
DEBUG_PRINT(sfree(p176););
printStats();
PRINT_POINTER(scalloc(207,44););
printStats();
void* p192 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p193 = last_address;
PRINT_POINTER(scalloc(205,122););
printStats();
void* p194 = last_address;
PRINT_POINTER(srealloc(p174,136););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p124,14););
printStats();
void* p196 = last_address;
PRINT_POINTER(smalloc(215););
printStats();
void* p197 = last_address;
PRINT_POINTER(scalloc(111,124););
printStats();
void* p198 = last_address;
PRINT_POINTER(smalloc(233););
printStats();
void* p199 = last_address;
PRINT_POINTER(smalloc(70););
printStats();
void* p200 = last_address;
PRINT_POINTER(srealloc(p179,10););
printStats();
void* p201 = last_address;
PRINT_POINTER(srealloc(p200,29););
printStats();
void* p202 = last_address;
PRINT_POINTER(scalloc(8,35););
printStats();
void* p203 = last_address;
PRINT_POINTER(smalloc(48););
printStats();
void* p204 = last_address;
PRINT_POINTER(smalloc(100););
printStats();
void* p205 = last_address;
PRINT_POINTER(scalloc(66,207););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(97,12););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p159,47););
printStats();
void* p208 = last_address;
PRINT_POINTER(smalloc(70););
printStats();
void* p209 = last_address;
DEBUG_PRINT(sfree(p172););
printStats();
PRINT_POINTER(scalloc(118,180););
printStats();
void* p210 = last_address;
DEBUG_PRINT(sfree(p204););
printStats();
PRINT_POINTER(srealloc(p158,136););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p185,61););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p205););
printStats();
PRINT_POINTER(scalloc(74,146););
printStats();
void* p213 = last_address;
PRINT_POINTER(scalloc(105,247););
printStats();
void* p214 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p215 = last_address;
PRINT_POINTER(scalloc(3,154););
printStats();
void* p216 = last_address;
PRINT_POINTER(smalloc(162););
printStats();
void* p217 = last_address;
DEBUG_PRINT(sfree(p181););
printStats();
DEBUG_PRINT(sfree(p182););
printStats();
PRINT_POINTER(scalloc(190,173););
printStats();
void* p218 = last_address;
PRINT_POINTER(srealloc(p207,226););
printStats();
void* p219 = last_address;
PRINT_POINTER(scalloc(40,87););
printStats();
void* p220 = last_address;
PRINT_POINTER(scalloc(173,213););
printStats();
void* p221 = last_address;
DEBUG_PRINT(sfree(p198););
printStats();
PRINT_POINTER(srealloc(p188,132););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p165,189););
printStats();
void* p223 = last_address;
DEBUG_PRINT(sfree(p201););
printStats();
PRINT_POINTER(scalloc(200,153););
printStats();
void* p224 = last_address;
DEBUG_PRINT(sfree(p184););
printStats();
PRINT_POINTER(smalloc(232););
printStats();
void* p225 = last_address;
PRINT_POINTER(smalloc(213););
printStats();
void* p226 = last_address;
DEBUG_PRINT(sfree(p196););
printStats();
PRINT_POINTER(smalloc(20););
printStats();
void* p227 = last_address;
PRINT_POINTER(scalloc(55,86););
printStats();
void* p228 = last_address;
PRINT_POINTER(srealloc(p177,68););
printStats();
void* p229 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p230 = last_address;
PRINT_POINTER(srealloc(p170,244););
printStats();
void* p231 = last_address;
PRINT_POINTER(srealloc(p167,8););
printStats();
void* p232 = last_address;
PRINT_POINTER(srealloc(p122,52););
printStats();
void* p233 = last_address;
PRINT_POINTER(smalloc(44););
printStats();
void* p234 = last_address;
PRINT_POINTER(srealloc(p222,117););
printStats();
void* p235 = last_address;
DEBUG_PRINT(sfree(p229););
printStats();
DEBUG_PRINT(sfree(p191););
printStats();
PRINT_POINTER(smalloc(58););
printStats();
void* p236 = last_address;
PRINT_POINTER(smalloc(150););
printStats();
void* p237 = last_address;
DEBUG_PRINT(sfree(p154););
printStats();
DEBUG_PRINT(sfree(p211););
printStats();
PRINT_POINTER(smalloc(79););
printStats();
void* p238 = last_address;
PRINT_POINTER(smalloc(26););
printStats();
void* p239 = last_address;
DEBUG_PRINT(sfree(p197););
printStats();
PRINT_POINTER(srealloc(p213,188););
printStats();
void* p240 = last_address;
PRINT_POINTER(scalloc(158,50););
printStats();
void* p241 = last_address;
PRINT_POINTER(smalloc(18););
printStats();
void* p242 = last_address;
PRINT_POINTER(scalloc(30,160););
printStats();
void* p243 = last_address;
PRINT_POINTER(srealloc(p193,88););
printStats();
void* p244 = last_address;
PRINT_POINTER(scalloc(3,82););
printStats();
void* p245 = last_address;
PRINT_POINTER(scalloc(146,236););
printStats();
void* p246 = last_address;
PRINT_POINTER(smalloc(1););
printStats();
void* p247 = last_address;
DEBUG_PRINT(sfree(p243););
printStats();
PRINT_POINTER(srealloc(p227,200););
printStats();
void* p248 = last_address;
PRINT_POINTER(srealloc(p244,48););
printStats();
void* p249 = last_address;
DEBUG_PRINT(sfree(p130););
printStats();
PRINT_POINTER(smalloc(174););
printStats();
void* p250 = last_address;
PRINT_POINTER(smalloc(50););
printStats();
void* p251 = last_address;
PRINT_POINTER(srealloc(p202,66););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p183););
printStats();
PRINT_POINTER(smalloc(203););
printStats();
void* p253 = last_address;
DEBUG_PRINT(sfree(p251););
printStats();
PRINT_POINTER(smalloc(203););
printStats();
void* p254 = last_address;
PRINT_POINTER(scalloc(85,21););
printStats();
void* p255 = last_address;
DEBUG_PRINT(sfree(p234););
printStats();
PRINT_POINTER(srealloc(p254,103););
printStats();
void* p256 = last_address;
PRINT_POINTER(srealloc(p225,203););
printStats();
void* p257 = last_address;
DEBUG_PRINT(sfree(p249););
printStats();
PRINT_POINTER(scalloc(109,35););
printStats();
void* p258 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p259 = last_address;
PRINT_POINTER(srealloc(p212,183););
printStats();
void* p260 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p261 = last_address;
PRINT_POINTER(scalloc(223,44););
printStats();
void* p262 = last_address;
DEBUG_PRINT(sfree(p231););
printStats();
DEBUG_PRINT(sfree(p149););
printStats();
DEBUG_PRINT(sfree(p261););
printStats();
PRINT_POINTER(scalloc(230,84););
printStats();
void* p263 = last_address;
PRINT_POINTER(scalloc(211,52););
printStats();
void* p264 = last_address;
PRINT_POINTER(smalloc(146););
printStats();
void* p265 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p266 = last_address;
PRINT_POINTER(srealloc(p223,225););
printStats();
void* p267 = last_address;
PRINT_POINTER(scalloc(91,96););
printStats();
void* p268 = last_address;
DEBUG_PRINT(sfree(p268););
printStats();
PRINT_POINTER(srealloc(p250,105););
printStats();
void* p269 = last_address;
PRINT_POINTER(srealloc(p119,63););
printStats();
void* p270 = last_address;
PRINT_POINTER(scalloc(197,22););
printStats();
void* p271 = last_address;
PRINT_POINTER(srealloc(p242,83););
printStats();
void* p272 = last_address;
PRINT_POINTER(scalloc(86,165););
printStats();
void* p273 = last_address;
DEBUG_PRINT(sfree(p230););
printStats();
DEBUG_PRINT(sfree(p112););
printStats();
PRINT_POINTER(smalloc(74););
printStats();
void* p274 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p275 = last_address;
DEBUG_PRINT(sfree(p187););
printStats();
PRINT_POINTER(scalloc(153,128););
printStats();
void* p276 = last_address;
PRINT_POINTER(scalloc(100,203););
printStats();
void* p277 = last_address;
PRINT_POINTER(scalloc(195,236););
printStats();
void* p278 = last_address;
PRINT_POINTER(srealloc(p168,138););
printStats();
void* p279 = last_address;
PRINT_POINTER(srealloc(p266,20););
printStats();
void* p280 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p281 = last_address;
PRINT_POINTER(smalloc(160););
printStats();
void* p282 = last_address;
DEBUG_PRINT(sfree(p275););
printStats();
DEBUG_PRINT(sfree(p192););
printStats();
DEBUG_PRINT(sfree(p132););
printStats();
DEBUG_PRINT(sfree(p216););
printStats();
PRINT_POINTER(scalloc(197,173););
printStats();
void* p283 = last_address;
PRINT_POINTER(srealloc(p267,118););
printStats();
void* p284 = last_address;
PRINT_POINTER(scalloc(157,160););
printStats();
void* p285 = last_address;
DEBUG_PRINT(sfree(p219););
printStats();
PRINT_POINTER(srealloc(p262,72););
printStats();
void* p286 = last_address;
PRINT_POINTER(srealloc(p237,186););
printStats();
void* p287 = last_address;
PRINT_POINTER(scalloc(70,207););
printStats();
void* p288 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p289 = last_address;
DEBUG_PRINT(sfree(p194););
printStats();
DEBUG_PRINT(sfree(p214););
printStats();
PRINT_POINTER(smalloc(87););
printStats();
void* p290 = last_address;
PRINT_POINTER(srealloc(p217,155););
printStats();
void* p291 = last_address;
PRINT_POINTER(scalloc(118,106););
printStats();
void* p292 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p293 = last_address;
PRINT_POINTER(smalloc(6););
printStats();
void* p294 = last_address;
PRINT_POINTER(scalloc(19,88););
printStats();
void* p295 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p296 = last_address;
PRINT_POINTER(scalloc(163,107););
printStats();
void* p297 = last_address;
DEBUG_PRINT(sfree(p256););
printStats();
PRINT_POINTER(scalloc(69,127););
printStats();
void* p298 = last_address;
PRINT_POINTER(scalloc(195,24););
printStats();
void* p299 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p300 = last_address;
DEBUG_PRINT(sfree(p239););
printStats();
PRINT_POINTER(srealloc(p245,100););
printStats();
void* p301 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p302 = last_address;
PRINT_POINTER(scalloc(34,18););
printStats();
void* p303 = last_address;
PRINT_POINTER(smalloc(79););
printStats();
void* p304 = last_address;
PRINT_POINTER(smalloc(139););
printStats();
void* p305 = last_address;
PRINT_POINTER(scalloc(180,28););
printStats();
void* p306 = last_address;
PRINT_POINTER(smalloc(118););
printStats();
void* p307 = last_address;
DEBUG_PRINT(sfree(p259););
printStats();
PRINT_POINTER(srealloc(p270,116););
printStats();
void* p308 = last_address;
PRINT_POINTER(scalloc(122,249););
printStats();
void* p309 = last_address;
PRINT_POINTER(scalloc(212,52););
printStats();
void* p310 = last_address;
PRINT_POINTER(srealloc(p233,45););
printStats();
void* p311 = last_address;
PRINT_POINTER(srealloc(p186,199););
printStats();
void* p312 = last_address;
PRINT_POINTER(scalloc(222,169););
printStats();
void* p313 = last_address;
PRINT_POINTER(scalloc(55,39););
printStats();
void* p314 = last_address;
PRINT_POINTER(smalloc(145););
printStats();
void* p315 = last_address;
PRINT_POINTER(smalloc(144););
printStats();
void* p316 = last_address;
PRINT_POINTER(scalloc(198,249););
printStats();
void* p317 = last_address;
DEBUG_PRINT(sfree(p221););
printStats();
PRINT_POINTER(srealloc(p281,79););
printStats();
void* p318 = last_address;
DEBUG_PRINT(sfree(p178););
printStats();
DEBUG_PRINT(sfree(p206););
printStats();
PRINT_POINTER(smalloc(227););
printStats();
void* p319 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p320 = last_address;
PRINT_POINTER(scalloc(231,132););
printStats();
void* p321 = last_address;
DEBUG_PRINT(sfree(p173););
printStats();
PRINT_POINTER(scalloc(93,120););
printStats();
void* p322 = last_address;
PRINT_POINTER(scalloc(56,131););
printStats();
void* p323 = last_address;
PRINT_POINTER(smalloc(177););
printStats();
void* p324 = last_address;
}
