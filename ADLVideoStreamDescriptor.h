/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADLVideoStreamDescriptor : NSObject {

	BOOL _publish;
	BOOL _receive;
	BOOL _useAdaptation;
	int _maxWidth;
	int _maxHeight;
	int _maxBitRate;
	int _maxFps;

}

@property (nonatomic,readonly) int maxWidth;                    //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,readonly) int maxHeight;                   //@synthesize maxHeight=_maxHeight - In the implementation block
@property (nonatomic,readonly) int maxBitRate;                  //@synthesize maxBitRate=_maxBitRate - In the implementation block
@property (nonatomic,readonly) int maxFps;                      //@synthesize maxFps=_maxFps - In the implementation block
@property (nonatomic,readonly) BOOL publish;                    //@synthesize publish=_publish - In the implementation block
@property (nonatomic,readonly) BOOL receive;                    //@synthesize receive=_receive - In the implementation block
@property (nonatomic,readonly) BOOL useAdaptation;              //@synthesize useAdaptation=_useAdaptation - In the implementation block
+(id)VideoStreamDescriptorWithMaxWidth:(int)arg1 maxHeight:(int)arg2 maxBitRate:(int)arg3 maxFps:(int)arg4 publish:(BOOL)arg5 receive:(BOOL)arg6 useAdaptation:(BOOL)arg7 ;
-(id)initWithMaxWidth:(int)arg1 maxHeight:(int)arg2 maxBitRate:(int)arg3 maxFps:(int)arg4 publish:(BOOL)arg5 receive:(BOOL)arg6 useAdaptation:(BOOL)arg7 ;
-(int)maxFps;
-(BOOL)useAdaptation;
-(BOOL)publish;
-(id)description;
-(int)maxWidth;
-(int)maxHeight;
-(int)maxBitRate;
-(BOOL)receive;
@end

