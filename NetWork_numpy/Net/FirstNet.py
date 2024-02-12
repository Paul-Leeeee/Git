import numpy
import numpy as np
netshape = np.array([2,3,4,2])
# ReLU激活函数
def activation_ReLU(input):
    return np.maximum(0,input)

# SoftMax激活函数
def activation_SoftMax(inputs):
    Max_value = np.max(inputs,axis = 1,keepdims = True)# keepdims 决定输出的矩阵形式
    print(Max_value)
    slided_inputs = inputs - Max_value#将数据滑动至负轴上，避免指数爆炸
    exp_value = np.exp(slided_inputs)
    normal_base = np.sum(exp_value,axis = 1,keepdims = True)
    normal_base = exp_value / normal_base
    return normal_base

#层类
class Layer:
    def __init__(self,n_inputs,n_neurons):
        self.Weights = np.random.randn(n_inputs,n_neurons)
        self.Biases = np.random.randn(n_neurons)

    def layer_forward(self,inputs):
        sum = np.dot(inputs,self.Weights) + self.Biases
        self.Output = activation_ReLU(sum)
        return self.Output
#网络类
class NetWork():
    def __init__(self,NetWork_Shape):
        self.layers = []
        self.shape = NetWork_Shape
        self.outputs = []
        for i in range(len(NetWork_Shape) - 1):
            layer = Layer(NetWork_Shape[i],NetWork_Shape[i + 1])
            self.layers.append(layer)
    def network_forward(self,inputs):
        self.outputs.append([inputs])
        for i in range(len(self.layers)):
            self.outputs.append(self.layers[i].layer_forward(self.outputs[i]))

#---------------------------------------------
# 输入部分初始化
a11 = -0.9
a21 = -0.4

a12 = -0.8
a22 = -0.5

a13 = -0.5
a23 = -0.8

a14 = -0.2
a24 = -0.7

a15 = -0.6
a25 = 0.9
Inputs = np.array([[a11,a21],
                   [a12,a22],
                   [a13,a23],
                   [a14,a24],
                   [a15,a25]])

#-----------------------------------------------------------------------------------------
def main():
    network = NetWork(netshape)
    #----------------------------------------------
    #层运算设置

    network.network_forward(Inputs)


    print(network.outputs)
# -----------------------------------------------------------------------------------------

main()