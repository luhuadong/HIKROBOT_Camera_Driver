# HIKROBOT Camera Demos



| 示例程序                              | 功能                           | 详细描述                                                     |
| ------------------------------------- | ------------------------------ | ------------------------------------------------------------ |
| **ChunkData.cpp**                     | 获取 Chunk 信息                | 该示例程序说明了如何打开 ChunkData 功能、如何配置 ChunkData 以及如何获取这些 ChunkData 信息。ChunkData 例如 Timestamp 、Exposure 等。 |
| **ConnectSpecCamera.cpp**             | 通过 IP 地址连接相机           | 该示例程序说明了如何通过ip地址连接网口相机。通过输入需要连接的相机 IP（Camera Ip）和相机对应的网卡 IP（Export Ip）来连接相机，输入的格式为 xx.xx.xx.xx。 |
| **Events.cpp**                        | 获取相机事件                   | 该示例程序说明了如何配置相机事件功能、如何注册事件回调以及如何在事件回调函数中处理获取到的事件信息。Event 事件例如：ExposureEnd。 |
| **ForceIP.cpp**                       | 设置相机静态 IP                | 该示例程序说明了如何设置网口相机静态ip。通过输入相机 IP，子网掩码（NetMask），默认网关（DefaultWay）来设置相机 IP 地址。输入的格式为 xx.xx.xx.xx。 |
| **Grab_ImageCallback.cpp**            | 通过回调获取相机图像           | 该示例程序说明了如何通过回调的方式获取相机图像。创建句柄，打开相机，注册回调函数，开始取流，在回调函数中可以获取到图像相关信息，停止取流，关闭相机，销毁句柄。 |
| **GrabImage.cpp**                     | 获取相机图像                   | 该示例程序说明了如何通过主动取图的方式获取相机图像。创建句柄，打开相机，开始取流，创建取流线程（用户分配采集 buffer， `MV_CC_GetOneFrameTimeout()` 取图（拷贝）），停止取流，关闭相机，销毁句柄。 |
| **GrabImage_HighPerformance.cpp**     | 高性能获取相机图像             | 该示例程序说明了高效率的主动取图方式。创建句柄，打开相机，开始取流，创建取流线程（ `MV_CC_GetImageBuffer()` 获取图像地址， `MV_CC_FreeImageBuffer()` 释放图像缓存），停止取流，关闭相机，销毁句柄。 |
| **GrabMultipleCamera.cpp**            | 多相机取流                     | 该示例程序说明了如何实现多相机取图。示例中通过创建多个相机句柄 handle 的方式以区分相机。 |
| **ImageProcess.cpp**                  | 图像处理                       | 该示例程序说明了如何实现图像像素格式转换和图像保存两个功能。在获取到图像数据后可以使用 `MV_CC_ConvertPixelType()` 进行数据格式转换，使用 `MV_CC_SaveImageEx2()` 进行图像保存。 |
| **MultiCast.cpp**                     | 设置组播模式                   | 该示例程序说明了如何设置传输模式为组播模式。通过询问用户启动多播控制应用程序或者多播监控应用程序，然后根据用户输入，以对应的访问权限打开相机，最后通过 `MV_GIGE_SetTransmissionType()` 设置组播模式。 |
| **ParametrizeCamera_FileAccess.cpp**  | 导入或导出文件到相机           | 该示例程序说明了如何导入文件到相机以及如何导出相机文件。演示了通过 `MV_CC_FileAccessRead()` 从设备读取文件（例如 UserSet1.bin）；通过 `MV_CC_FileAccessWrite()` 将文件（例如 UserSet1.bin）写入相机；以及通过 `MV_CC_GetFileAccessProgress()` 获取文件的存取进度。 |
| **ParametrizeCamera_LoadAndSave.cpp** | 导入或导出相机属性             | 该示例程序说明了如何导入和导出相机的属性树文件。演示了通过 `MV_CC_FeatureSave()` 将相机属性导出到文件（例如 FeatureFile.ini）中；通过 `MV_CC_FeatureLoad()` 从文件（例如 FeatureFile.ini）中导入相机的属性树。 |
| **ReconnectDemo.cpp**                 | 相机重连                       | 该示例程序说明了相机掉线后，心跳时间内重新连接后的操作，通过在打开相机后注册异常回调函数来监测相机掉线异常状态。重连后先进行停止取流、关闭设备、销毁句柄操作后重新连接相机。 |
| **SetIO.cpp**                         | 设置相机 IO                    | 该示例程序说明了在打开设备后如何设置和获取设备 IO 状态。     |
| **SetParam.cpp**                      | 设置相机参数                   | 该示例程序说明了如何使用通用接口设置相机参数，包括 Int、Float、Enum、Bool 等类型节点的设置。 |
| **Trigger_Image.cpp**                 | 触发模式获取相机图像           | 该示例程序说明了触发模式下通过软触发主动取图的方式获取图像。创建句柄，打开相机，设置触发模式，设置触发源（软触发），开始取流，创建取流线程（发送软触发 command 命令， `MV_CC_GetOneFrameTimeout()` 取图），停止取流，关闭相机，销毁句柄。 |
| **Trigger_ImageCallback.cpp**         | 触发模式下通过回调获取相机图像 | 该示例程序说明了通过软触发回调取图的方式获取图像。创建句柄，打开相机，设置触发模式，设置触发源（软触发），注册抓图回调函数，开始取流，在回调函数中可以获取通过软触发得到的图像信息，停止取流，关闭相机，销毁句柄。 |

