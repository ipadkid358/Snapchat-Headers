/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ADLFrameData : NSObject {

	BOOL _keyFrame;
	int _width;
	int _height;
	NSArray* _frameData;
	long long _timestamp;

}

@property (nonatomic,readonly) NSArray * frameData;              //@synthesize frameData=_frameData - In the implementation block
@property (nonatomic,readonly) int width;                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL keyFrame;                    //@synthesize keyFrame=_keyFrame - In the implementation block
+(id)FrameDataWithFrameData:(id)arg1 width:(int)arg2 height:(int)arg3 timestamp:(long long)arg4 keyFrame:(BOOL)arg5 ;
-(id)initWithFrameData:(id)arg1 width:(int)arg2 height:(int)arg3 timestamp:(long long)arg4 keyFrame:(BOOL)arg5 ;
-(NSArray *)frameData;
-(BOOL)keyFrame;
-(id)description;
-(long long)timestamp;
-(int)width;
-(int)height;
@end

