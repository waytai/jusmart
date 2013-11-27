import os
ret_text_list = os.popen("ps | grep python")
pid_list = []

def get_pid_num(text_list):
    for line in text_list:
        pid_list.append(line)
    cmd_list = pid_list[0].split()
    return cmd_list[1]
pid_num = get_pid_num(ret_text_list)
os.system("kill -9 %s"%pid_num)
print "pid %s have killed" %pid_num

pid_num_two = get_pid_num(ret_text_list)
if pid_num_two:
    os.system("stop popocloudsvr")
