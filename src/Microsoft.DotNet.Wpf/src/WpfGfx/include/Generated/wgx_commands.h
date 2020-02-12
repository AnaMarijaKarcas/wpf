// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.


//---------------------------------------------------------------------------

//
// This file is automatically generated.  Please do not edit it directly.
//
// File name: wgx_commands.h
//---------------------------------------------------------------------------

#pragma once

typedef struct
{
    MILCMD Type;
} MILCMD_TRANSPORT_SYNCFLUSH;

typedef struct
{
    MILCMD Type;
    HMIL_CHANNEL hChannel;
} MILCMD_TRANSPORT_DESTROYRESOURCESONCHANNEL;

typedef struct
{
    MILCMD Type;
    BOOL Enable;
} MILCMD_PARTITION_REGISTERFORNOTIFICATIONS;

typedef struct
{
    MILCMD Type;
    BOOL ReturnCommonMinimum;
} MILCMD_CHANNEL_REQUESTTIER;

typedef struct
{
    MILCMD Type;
    BOOL Enable;
} MILCMD_PARTITION_SETVBLANKSYNCMODE;

typedef struct
{
    MILCMD Type;
    UINT64 FrameTime;
} MILCMD_PARTITION_NOTIFYPRESENT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MIL_RESOURCE_TYPE resType;
} MILCMD_CHANNEL_CREATERESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MIL_RESOURCE_TYPE resType;
} MILCMD_CHANNEL_DELETERESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Original;
    HMIL_CHANNEL TargetChannel;
    HMIL_RESOURCE Duplicate;
} MILCMD_CHANNEL_DUPLICATEHANDLE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 pInteropDeviceBitmap;
    UINT64 pSoftwareBitmap;
} MILCMD_D3DIMAGE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 hEvent;
} MILCMD_D3DIMAGE_PRESENT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    IWICBitmapSource* pIBitmap;
} MILCMD_BITMAP_SOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    BOOL UseDirtyRect;
    RECT DirtyRect;
} MILCMD_BITMAP_INVALIDATE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Value;
} MILCMD_DOUBLERESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF Value;
} MILCMD_COLORRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPoint2D Value;
} MILCMD_POINTRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPointAndSizeD Value;
} MILCMD_RECTRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilSizeD Value;
} MILCMD_SIZERESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilMatrix3x2D Value;
} MILCMD_MATRIXRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPoint3F Value;
} MILCMD_POINT3DRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPoint3F Value;
} MILCMD_VECTOR3DRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilQuaternionF Value;
} MILCMD_QUATERNIONRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 pMedia;
    BOOL notifyUceDirect;
} MILCMD_MEDIAPLAYER;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT cbData;
} MILCMD_RENDERDATA;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT id;
} MILCMD_ETWEVENTRESOURCE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
} MILCMD_VISUAL_CREATE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE offsetX;
    DOUBLE offsetY;
} MILCMD_VISUAL_SETOFFSET;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hTransform;
} MILCMD_VISUAL_SETTRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hEffect;
} MILCMD_VISUAL_SETEFFECT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hCacheMode;
} MILCMD_VISUAL_SETCACHEMODE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hClip;
} MILCMD_VISUAL_SETCLIP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE alpha;
} MILCMD_VISUAL_SETALPHA;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilRenderOptions renderOptions;
} MILCMD_VISUAL_SETRENDEROPTIONS;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hContent;
} MILCMD_VISUAL_SETCONTENT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hAlphaMask;
} MILCMD_VISUAL_SETALPHAMASK;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
} MILCMD_VISUAL_REMOVEALLCHILDREN;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hChild;
} MILCMD_VISUAL_REMOVECHILD;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hChild;
    UINT index;
} MILCMD_VISUAL_INSERTCHILDAT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    WORD countX;
    UINT16 UINT16Padding0;
    WORD countY;
    UINT16 UINT16Padding1;
} MILCMD_VISUAL_SETGUIDELINECOLLECTION;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPointAndSizeD Clip;
    BOOL IsEnabled;
} MILCMD_VISUAL_SETSCROLLABLEAREACLIP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hCamera;
} MILCMD_VIEWPORT3DVISUAL_SETCAMERA;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPointAndSizeD Viewport;
} MILCMD_VIEWPORT3DVISUAL_SETVIEWPORT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hChild;
} MILCMD_VIEWPORT3DVISUAL_SET3DCHILD;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hContent;
} MILCMD_VISUAL3D_SETCONTENT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hTransform;
} MILCMD_VISUAL3D_SETTRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
} MILCMD_VISUAL3D_REMOVEALLCHILDREN;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hChild;
} MILCMD_VISUAL3D_REMOVECHILD;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hChild;
    UINT index;
} MILCMD_VISUAL3D_INSERTCHILDAT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 hwnd;
    UINT64 hSection;
    UINT64 masterDevice;
    UINT width;
    UINT height;
    MilColorF clearColor;
    UINT flags;
    HMIL_RESOURCE hBitmap;
    UINT stride;
    MilPixelFormat::Enum ePixelFormat;
    INT DpiAwarenessContext;
    DOUBLE DpiX;
    DOUBLE DpiY;
} MILCMD_HWNDTARGET_CREATE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    BOOL Suppress;
} MILCMD_HWNDTARGET_SUPPRESSLAYERED;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    RECT windowRect;
    MilWindowLayerType::Enum windowLayerType;
    MilTransparency::Flags transparencyMode;
    FLOAT constantAlpha;
    BOOL isChild;
    BOOL isRTL;
    BOOL renderingEnabled;
    MilColorF colorKey;
    UINT disableCookie;
    BOOL gdiBlt;
} MILCMD_TARGET_UPDATEWINDOWSETTINGS;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 hwnd;
    UINT64 pRenderTarget;
    UINT width;
    UINT height;
    UINT dummy;
} MILCMD_GENERICTARGET_CREATE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hRoot;
} MILCMD_TARGET_SETROOT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF clearColor;
} MILCMD_TARGET_SETCLEARCOLOR;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    RECT rc;
} MILCMD_TARGET_INVALIDATE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT flags;
} MILCMD_TARGET_SETFLAGS;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE DpiX;
    DOUBLE DpiY;
    BOOL AfterParent;
} MILCMD_HWNDTARGET_DPICHANGED;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 pIDWriteFont;
    WORD GlyphRunFlags;
    UINT16 UINT16Padding0;
    MilPoint2F Origin;
    FLOAT MuSize;
    MilPointAndSizeD ManagedBounds;
    WORD GlyphCount;
    UINT16 UINT16Padding1;
    WORD BidiLevel;
    UINT16 UINT16Padding2;
    WORD DWriteTextMeasuringMethod;
    UINT16 UINT16Padding3;
} MILCMD_GLYPHRUN_CREATE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 SwDoubleBufferedBitmap;
    BOOL UseBackBuffer;
} MILCMD_DOUBLEBUFFEREDBITMAP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT64 CopyCompletedEvent;
} MILCMD_DOUBLEBUFFEREDBITMAP_COPYFORWARD;

typedef struct
{
    MILCMD Type;
    BOOL ShouldRenderEvenWhenNoDisplayDevicesAreAvailable;
} MILCMD_PARTITION_NOTIFYPOLICYCHANGEFORNONINTERACTIVEMODE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE angle;
    MilPoint3F axis;
    HMIL_RESOURCE hAxisAnimations;
    HMIL_RESOURCE hAngleAnimations;
} MILCMD_AXISANGLEROTATION3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilQuaternionF quaternion;
    HMIL_RESOURCE hQuaternionAnimations;
} MILCMD_QUATERNIONROTATION3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE nearPlaneDistance;
    DOUBLE farPlaneDistance;
    DOUBLE fieldOfView;
    MilPoint3F position;
    HMIL_RESOURCE htransform;
    MilPoint3F lookDirection;
    HMIL_RESOURCE hNearPlaneDistanceAnimations;
    MilPoint3F upDirection;
    HMIL_RESOURCE hFarPlaneDistanceAnimations;
    HMIL_RESOURCE hPositionAnimations;
    HMIL_RESOURCE hLookDirectionAnimations;
    HMIL_RESOURCE hUpDirectionAnimations;
    HMIL_RESOURCE hFieldOfViewAnimations;
} MILCMD_PERSPECTIVECAMERA;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE nearPlaneDistance;
    DOUBLE farPlaneDistance;
    DOUBLE width;
    MilPoint3F position;
    HMIL_RESOURCE htransform;
    MilPoint3F lookDirection;
    HMIL_RESOURCE hNearPlaneDistanceAnimations;
    MilPoint3F upDirection;
    HMIL_RESOURCE hFarPlaneDistanceAnimations;
    HMIL_RESOURCE hPositionAnimations;
    HMIL_RESOURCE hLookDirectionAnimations;
    HMIL_RESOURCE hUpDirectionAnimations;
    HMIL_RESOURCE hWidthAnimations;
} MILCMD_ORTHOGRAPHICCAMERA;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    D3DMATRIX viewMatrix;
    D3DMATRIX projectionMatrix;
    HMIL_RESOURCE htransform;
} MILCMD_MATRIXCAMERA;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE htransform;
    UINT32 ChildrenSize;
} MILCMD_MODEL3DGROUP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    HMIL_RESOURCE htransform;
    HMIL_RESOURCE hColorAnimations;
} MILCMD_AMBIENTLIGHT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    MilPoint3F direction;
    HMIL_RESOURCE htransform;
    HMIL_RESOURCE hColorAnimations;
    HMIL_RESOURCE hDirectionAnimations;
} MILCMD_DIRECTIONALLIGHT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    DOUBLE range;
    DOUBLE constantAttenuation;
    DOUBLE linearAttenuation;
    DOUBLE quadraticAttenuation;
    MilPoint3F position;
    HMIL_RESOURCE htransform;
    HMIL_RESOURCE hColorAnimations;
    HMIL_RESOURCE hPositionAnimations;
    HMIL_RESOURCE hRangeAnimations;
    HMIL_RESOURCE hConstantAttenuationAnimations;
    HMIL_RESOURCE hLinearAttenuationAnimations;
    HMIL_RESOURCE hQuadraticAttenuationAnimations;
} MILCMD_POINTLIGHT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    DOUBLE range;
    DOUBLE constantAttenuation;
    DOUBLE linearAttenuation;
    DOUBLE quadraticAttenuation;
    DOUBLE outerConeAngle;
    DOUBLE innerConeAngle;
    MilPoint3F position;
    HMIL_RESOURCE htransform;
    MilPoint3F direction;
    HMIL_RESOURCE hColorAnimations;
    HMIL_RESOURCE hPositionAnimations;
    HMIL_RESOURCE hRangeAnimations;
    HMIL_RESOURCE hConstantAttenuationAnimations;
    HMIL_RESOURCE hLinearAttenuationAnimations;
    HMIL_RESOURCE hQuadraticAttenuationAnimations;
    HMIL_RESOURCE hDirectionAnimations;
    HMIL_RESOURCE hOuterConeAngleAnimations;
    HMIL_RESOURCE hInnerConeAngleAnimations;
} MILCMD_SPOTLIGHT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE htransform;
    HMIL_RESOURCE hgeometry;
    HMIL_RESOURCE hmaterial;
    HMIL_RESOURCE hbackMaterial;
} MILCMD_GEOMETRYMODEL3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT32 PositionsSize;
    UINT32 NormalsSize;
    UINT32 TextureCoordinatesSize;
    UINT32 TriangleIndicesSize;
} MILCMD_MESHGEOMETRY3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT32 ChildrenSize;
} MILCMD_MATERIALGROUP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    MilColorF ambientColor;
    HMIL_RESOURCE hbrush;
} MILCMD_DIFFUSEMATERIAL;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    DOUBLE specularPower;
    HMIL_RESOURCE hbrush;
} MILCMD_SPECULARMATERIAL;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilColorF color;
    HMIL_RESOURCE hbrush;
} MILCMD_EMISSIVEMATERIAL;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT32 ChildrenSize;
} MILCMD_TRANSFORM3DGROUP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE offsetX;
    DOUBLE offsetY;
    DOUBLE offsetZ;
    HMIL_RESOURCE hOffsetXAnimations;
    HMIL_RESOURCE hOffsetYAnimations;
    HMIL_RESOURCE hOffsetZAnimations;
} MILCMD_TRANSLATETRANSFORM3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE scaleX;
    DOUBLE scaleY;
    DOUBLE scaleZ;
    DOUBLE centerX;
    DOUBLE centerY;
    DOUBLE centerZ;
    HMIL_RESOURCE hScaleXAnimations;
    HMIL_RESOURCE hScaleYAnimations;
    HMIL_RESOURCE hScaleZAnimations;
    HMIL_RESOURCE hCenterXAnimations;
    HMIL_RESOURCE hCenterYAnimations;
    HMIL_RESOURCE hCenterZAnimations;
} MILCMD_SCALETRANSFORM3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE centerX;
    DOUBLE centerY;
    DOUBLE centerZ;
    HMIL_RESOURCE hCenterXAnimations;
    HMIL_RESOURCE hCenterYAnimations;
    HMIL_RESOURCE hCenterZAnimations;
    HMIL_RESOURCE hrotation;
} MILCMD_ROTATETRANSFORM3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    D3DMATRIX matrix;
} MILCMD_MATRIXTRANSFORM3D;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    ShaderEffectShaderRenderMode::Enum ShaderRenderMode;
    UINT32 PixelShaderBytecodeSize;
    BOOL CompileSoftwareShader;
} MILCMD_PIXELSHADER;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
} MILCMD_IMPLICITINPUTBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Radius;
    HMIL_RESOURCE hRadiusAnimations;
    MilKernelType::Enum KernelType;
    MilEffectRenderingBias::Enum RenderingBias;
} MILCMD_BLUREFFECT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE ShadowDepth;
    MilColorF Color;
    DOUBLE Direction;
    DOUBLE Opacity;
    DOUBLE BlurRadius;
    HMIL_RESOURCE hShadowDepthAnimations;
    HMIL_RESOURCE hColorAnimations;
    HMIL_RESOURCE hDirectionAnimations;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hBlurRadiusAnimations;
    MilEffectRenderingBias::Enum RenderingBias;
} MILCMD_DROPSHADOWEFFECT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE TopPadding;
    DOUBLE BottomPadding;
    DOUBLE LeftPadding;
    DOUBLE RightPadding;
    HMIL_RESOURCE hPixelShader;
    INT DdxUvDdyUvRegisterIndex;
    UINT32 ShaderConstantFloatRegistersSize;
    UINT32 DependencyPropertyFloatValuesSize;
    UINT32 ShaderConstantIntRegistersSize;
    UINT32 DependencyPropertyIntValuesSize;
    UINT32 ShaderConstantBoolRegistersSize;
    UINT32 DependencyPropertyBoolValuesSize;
    UINT32 ShaderSamplerRegistrationInfoSize;
    UINT32 DependencyPropertySamplerValuesSize;
} MILCMD_SHADEREFFECT;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hDrawing;
} MILCMD_DRAWINGIMAGE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT32 ChildrenSize;
} MILCMD_TRANSFORMGROUP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE X;
    DOUBLE Y;
    HMIL_RESOURCE hXAnimations;
    HMIL_RESOURCE hYAnimations;
} MILCMD_TRANSLATETRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE ScaleX;
    DOUBLE ScaleY;
    DOUBLE CenterX;
    DOUBLE CenterY;
    HMIL_RESOURCE hScaleXAnimations;
    HMIL_RESOURCE hScaleYAnimations;
    HMIL_RESOURCE hCenterXAnimations;
    HMIL_RESOURCE hCenterYAnimations;
} MILCMD_SCALETRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE AngleX;
    DOUBLE AngleY;
    DOUBLE CenterX;
    DOUBLE CenterY;
    HMIL_RESOURCE hAngleXAnimations;
    HMIL_RESOURCE hAngleYAnimations;
    HMIL_RESOURCE hCenterXAnimations;
    HMIL_RESOURCE hCenterYAnimations;
} MILCMD_SKEWTRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Angle;
    DOUBLE CenterX;
    DOUBLE CenterY;
    HMIL_RESOURCE hAngleAnimations;
    HMIL_RESOURCE hCenterXAnimations;
    HMIL_RESOURCE hCenterYAnimations;
} MILCMD_ROTATETRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilMatrix3x2D Matrix;
    HMIL_RESOURCE hMatrixAnimations;
} MILCMD_MATRIXTRANSFORM;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPoint2D StartPoint;
    MilPoint2D EndPoint;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hStartPointAnimations;
    HMIL_RESOURCE hEndPointAnimations;
} MILCMD_LINEGEOMETRY;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE RadiusX;
    DOUBLE RadiusY;
    MilPointAndSizeD Rect;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRadiusXAnimations;
    HMIL_RESOURCE hRadiusYAnimations;
    HMIL_RESOURCE hRectAnimations;
} MILCMD_RECTANGLEGEOMETRY;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE RadiusX;
    DOUBLE RadiusY;
    MilPoint2D Center;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRadiusXAnimations;
    HMIL_RESOURCE hRadiusYAnimations;
    HMIL_RESOURCE hCenterAnimations;
} MILCMD_ELLIPSEGEOMETRY;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hTransform;
    MilFillMode::Enum FillRule;
    UINT32 ChildrenSize;
} MILCMD_GEOMETRYGROUP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hTransform;
    MilCombineMode::Enum GeometryCombineMode;
    HMIL_RESOURCE hGeometry1;
    HMIL_RESOURCE hGeometry2;
} MILCMD_COMBINEDGEOMETRY;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hTransform;
    MilFillMode::Enum FillRule;
    UINT32 FiguresSize;
} MILCMD_PATHGEOMETRY;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    MilColorF Color;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    HMIL_RESOURCE hColorAnimations;
} MILCMD_SOLIDCOLORBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    MilPoint2D StartPoint;
    MilPoint2D EndPoint;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    MilColorInterpolationMode::Enum ColorInterpolationMode;
    MilBrushMappingMode::Enum MappingMode;
    MilGradientSpreadMethod::Enum SpreadMethod;
    UINT32 GradientStopsSize;
    HMIL_RESOURCE hStartPointAnimations;
    HMIL_RESOURCE hEndPointAnimations;
} MILCMD_LINEARGRADIENTBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    MilPoint2D Center;
    DOUBLE RadiusX;
    DOUBLE RadiusY;
    MilPoint2D GradientOrigin;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    MilColorInterpolationMode::Enum ColorInterpolationMode;
    MilBrushMappingMode::Enum MappingMode;
    MilGradientSpreadMethod::Enum SpreadMethod;
    UINT32 GradientStopsSize;
    HMIL_RESOURCE hCenterAnimations;
    HMIL_RESOURCE hRadiusXAnimations;
    HMIL_RESOURCE hRadiusYAnimations;
    HMIL_RESOURCE hGradientOriginAnimations;
} MILCMD_RADIALGRADIENTBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    MilPointAndSizeD Viewport;
    MilPointAndSizeD Viewbox;
    DOUBLE CacheInvalidationThresholdMinimum;
    DOUBLE CacheInvalidationThresholdMaximum;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    MilBrushMappingMode::Enum ViewportUnits;
    MilBrushMappingMode::Enum ViewboxUnits;
    HMIL_RESOURCE hViewportAnimations;
    HMIL_RESOURCE hViewboxAnimations;
    MilStretch::Enum Stretch;
    MilTileMode::Enum TileMode;
    MilHorizontalAlignment::Enum AlignmentX;
    MilVerticalAlignment::Enum AlignmentY;
    MilCachingHint::Enum CachingHint;
    HMIL_RESOURCE hImageSource;
} MILCMD_IMAGEBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    MilPointAndSizeD Viewport;
    MilPointAndSizeD Viewbox;
    DOUBLE CacheInvalidationThresholdMinimum;
    DOUBLE CacheInvalidationThresholdMaximum;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    MilBrushMappingMode::Enum ViewportUnits;
    MilBrushMappingMode::Enum ViewboxUnits;
    HMIL_RESOURCE hViewportAnimations;
    HMIL_RESOURCE hViewboxAnimations;
    MilStretch::Enum Stretch;
    MilTileMode::Enum TileMode;
    MilHorizontalAlignment::Enum AlignmentX;
    MilVerticalAlignment::Enum AlignmentY;
    MilCachingHint::Enum CachingHint;
    HMIL_RESOURCE hDrawing;
} MILCMD_DRAWINGBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    MilPointAndSizeD Viewport;
    MilPointAndSizeD Viewbox;
    DOUBLE CacheInvalidationThresholdMinimum;
    DOUBLE CacheInvalidationThresholdMaximum;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    MilBrushMappingMode::Enum ViewportUnits;
    MilBrushMappingMode::Enum ViewboxUnits;
    HMIL_RESOURCE hViewportAnimations;
    HMIL_RESOURCE hViewboxAnimations;
    MilStretch::Enum Stretch;
    MilTileMode::Enum TileMode;
    MilHorizontalAlignment::Enum AlignmentX;
    MilVerticalAlignment::Enum AlignmentY;
    MilCachingHint::Enum CachingHint;
    HMIL_RESOURCE hVisual;
} MILCMD_VISUALBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hRelativeTransform;
    HMIL_RESOURCE hBitmapCache;
    HMIL_RESOURCE hInternalTarget;
} MILCMD_BITMAPCACHEBRUSH;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Offset;
    HMIL_RESOURCE hOffsetAnimations;
    UINT32 DashesSize;
} MILCMD_DASHSTYLE;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Thickness;
    DOUBLE MiterLimit;
    HMIL_RESOURCE hBrush;
    HMIL_RESOURCE hThicknessAnimations;
    MilPenCap::Enum StartLineCap;
    MilPenCap::Enum EndLineCap;
    MilPenCap::Enum DashCap;
    MilPenJoin::Enum LineJoin;
    HMIL_RESOURCE hDashStyle;
} MILCMD_PEN;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hBrush;
    HMIL_RESOURCE hPen;
    HMIL_RESOURCE hGeometry;
} MILCMD_GEOMETRYDRAWING;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    HMIL_RESOURCE hGlyphRun;
    HMIL_RESOURCE hForegroundBrush;
} MILCMD_GLYPHRUNDRAWING;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPointAndSizeD Rect;
    HMIL_RESOURCE hImageSource;
    HMIL_RESOURCE hRectAnimations;
} MILCMD_IMAGEDRAWING;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    MilPointAndSizeD Rect;
    HMIL_RESOURCE hPlayer;
    HMIL_RESOURCE hRectAnimations;
} MILCMD_VIDEODRAWING;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE Opacity;
    UINT32 ChildrenSize;
    HMIL_RESOURCE hClipGeometry;
    HMIL_RESOURCE hOpacityAnimations;
    HMIL_RESOURCE hOpacityMask;
    HMIL_RESOURCE hTransform;
    HMIL_RESOURCE hGuidelineSet;
    MilEdgeMode::Enum EdgeMode;
    MilBitmapScalingMode::Enum bitmapScalingMode;
    MilClearTypeHint::Enum ClearTypeHint;
} MILCMD_DRAWINGGROUP;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    UINT32 GuidelinesXSize;
    UINT32 GuidelinesYSize;
    BOOL IsDynamic;
} MILCMD_GUIDELINESET;

typedef struct
{
    MILCMD Type;
    HMIL_RESOURCE Handle;
    DOUBLE RenderAtScale;
    HMIL_RESOURCE hRenderAtScaleAnimations;
    BOOL SnapsToDevicePixels;
    BOOL EnableClearType;
} MILCMD_BITMAPCACHE;


