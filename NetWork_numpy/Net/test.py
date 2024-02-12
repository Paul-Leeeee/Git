import numpy as np
def activation_SoftMax(inputs):
    Max_value = np.max(inputs,axis = 1,keepdims = True)# keepdims 决定输出的矩阵形式
    print(Max_value)
    slided_inputs = inputs - Max_value#将数据滑动至负轴上，避免指数爆炸
    exp_value = np.exp(slided_inputs)
    normal_base = np.sum(exp_value,axis = 1,keepdims = True)
    normal_base = exp_value / normal_base
    return normal_base
#---------------------------------------------
# 输入部分初始化
a11 = 0.9
a21 = -0.4

a12 = -0.8
a22 = 0.5

a13 = -0.5
a23 = 0.8

a14 = 0.7
a24 = -0.3

a15 = -0.9
a25 = 0.4
Inputs = np.array([[a11,a21],
                   [a12,a22],
                   [a13,a23],
                   [a14,a24],
                   [a15,a25]])
#---------------------------------------------------
print(Inputs)
print(activation_SoftMax(Inputs))