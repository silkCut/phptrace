/**
 * Copyright 2015 Yuchen Wang <phobosw@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 4 million is the hard limit of linux kernel so far, and it is 99999 on Mac
 * OS X which is coverd by this value. So 4*1024*1024 can serve both linux and
 * unix(include darwin). */
#define PT_PID_INVALID  -1
#define PT_PID_MAX      0x400000
#define PT_PID_ALL      0xF0000001

typedef struct {
    int command;
    int verbose;

    int pid;
} pt_context_t;

/* make it accessable, the global variable declared in cli.c */
extern pt_context_t clictx;
