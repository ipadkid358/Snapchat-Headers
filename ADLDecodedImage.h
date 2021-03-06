/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface ADLDecodedImage : NSObject {

	int _planeYPixelStride;
	int _planeCbPixelStride;
	int _planeCrPixelStride;
	int _planeYRowStride;
	int _planeCbRowStride;
	int _planeCrRowStride;
	int _width;
	int _height;
	NSData* _planeY;
	NSData* _planeCb;
	NSData* _planeCr;
	long long _timestamp;

}

@property (nonatomic,readonly) NSData * planeY;                     //@synthesize planeY=_planeY - In the implementation block
@property (nonatomic,readonly) NSData * planeCb;                    //@synthesize planeCb=_planeCb - In the implementation block
@property (nonatomic,readonly) NSData * planeCr;                    //@synthesize planeCr=_planeCr - In the implementation block
@property (nonatomic,readonly) int planeYPixelStride;               //@synthesize planeYPixelStride=_planeYPixelStride - In the implementation block
@property (nonatomic,readonly) int planeCbPixelStride;              //@synthesize planeCbPixelStride=_planeCbPixelStride - In the implementation block
@property (nonatomic,readonly) int planeCrPixelStride;              //@synthesize planeCrPixelStride=_planeCrPixelStride - In the implementation block
@property (nonatomic,readonly) int planeYRowStride;                 //@synthesize planeYRowStride=_planeYRowStride - In the implementation block
@property (nonatomic,readonly) int planeCbRowStride;                //@synthesize planeCbRowStride=_planeCbRowStride - In the implementation block
@property (nonatomic,readonly) int planeCrRowStride;                //@synthesize planeCrRowStride=_planeCrRowStride - In the implementation block
@property (nonatomic,readonly) int width;                           //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                          //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
+(id)DecodedImageWithPlaneY:(id)arg1 planeCb:(id)arg2 planeCr:(id)arg3 planeYPixelStride:(int)arg4 planeCbPixelStride:(int)arg5 planeCrPixelStride:(int)arg6 planeYRowStride:(int)arg7 planeCbRowStride:(int)arg8 planeCrRowStride:(int)arg9 width:(int)arg10 height:(int)arg11 timestamp:(long long)arg12 ;
-(id)initWithPlaneY:(id)arg1 planeCb:(id)arg2 planeCr:(id)arg3 planeYPixelStride:(int)arg4 planeCbPixelStride:(int)arg5 planeCrPixelStride:(int)arg6 planeYRowStride:(int)arg7 planeCbRowStride:(int)arg8 planeCrRowStride:(int)arg9 width:(int)arg10 height:(int)arg11 timestamp:(long long)arg12 ;
-(NSData *)planeY;
-(NSData *)planeCb;
-(NSData *)planeCr;
-(int)planeYPixelStride;
-(int)planeCbPixelStride;
-(int)planeCrPixelStride;
-(int)planeYRowStride;
-(int)planeCbRowStride;
-(int)planeCrRowStride;
-(id)description;
-(long long)timestamp;
-(int)width;
-(int)height;
@end

