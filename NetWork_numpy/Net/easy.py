import numpy as np

# 激活函数
def activation_ReLU(input):
    return np.maximum(0,input)

# 权重阵生成
def weight_Init(n_inputs, n_neurons):
    return np.random.randn(n_inputs,n_neurons)

# 偏置阵生成
def BiasesInit(n_neurous):
    return np.random.randn(n_neurous)

#层类
class Layer:
    def __init__(self,n_inputs,n_neurons):
        self.Weights = np.random.randn(n_inputs,n_neurons)
        self.Biases = np.random.randn(n_neurons)

    def layer_forward(self,inputs):
        sum = np.dot(inputs,self.Weights) + self.Biases
        self.Output = activation_ReLU(sum)
        return self.Output

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
Inputs = np.array([[a11, a21],
                   [a12, a22],
                   [a13, a23],
                   [a14, a24],
                   [a15, a25]])

# 层模型设置
# 第一层
layer1 = Layer(2, 3)
# Weights1 = weight_Init(2,3)
# Biases2 = biasesInit(3)

# 第二层
layer2 = Layer(3, 4)
# Weights2 = weight_Init(3,4)
# Biases2 = biasesInit(4)

# 第三层
layer3 = Layer(4, 2)
# Weights3 = weight_Init(4,2)
# Biases3 = biasesInit(2)
# ----------------------------------------------
# 层运算设置

# 第一层运算
Output1 = layer1.layer_forward(Inputs)
# sum1 = np.dot(Inputs,Weights1)+ Biases1
# Output1 = activation_ReLU(sum1)

# 第二层运算
Output2 = layer2.layer_forward(Output1)
# sum2 = np.dot(Output1,Weights2)+ Biases2# Output2 = activation_ReLU(sum2)

# 第三层运算
Output3 = layer3.layer_forward(Output2)
# sum3 = np.dot(Output2,Weights3)+ Biases3
# Output3 = activation_ReLU(sum3)

print(Output1)
print('---------------------------------')
print(Output2)
print('---------------------------------')
print(Output3)
# print(Weights)
# print('---------------------------------')
# print(sum)
# print('---------------------------------')
# print(activation_ReLU(sum))