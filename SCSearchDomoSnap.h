/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchDomoSnapMediaInfo, SCSearchDomoSnapGcsInfo, SCSearchDomoSnapContextInfo, SCSearchDomoSnapTrainingInfo, SCSearchDomoSnapRenderingInfo;

@interface SCSearchDomoSnap : NSObject <NSCopying> {

	NSString* _domoSnapId;
	SCSearchDomoSnapMediaInfo* _snapInfo;
	SCSearchDomoSnapGcsInfo* _gcsInfo;
	SCSearchDomoSnapContextInfo* _contextInfo;
	SCSearchDomoSnapTrainingInfo* _trainingInfo;
	long long _mediaFormat;
	SCSearchDomoSnapRenderingInfo* _renderingInfo;

}

@property (nonatomic,copy,readonly) NSString * domoSnapId;                                      //@synthesize domoSnapId=_domoSnapId - In the implementation block
@property (nonatomic,copy,readonly) SCSearchDomoSnapMediaInfo * snapInfo;                       //@synthesize snapInfo=_snapInfo - In the implementation block
@property (nonatomic,copy,readonly) SCSearchDomoSnapGcsInfo * gcsInfo;                          //@synthesize gcsInfo=_gcsInfo - In the implementation block
@property (nonatomic,copy,readonly) SCSearchDomoSnapContextInfo * contextInfo;                  //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,copy,readonly) SCSearchDomoSnapTrainingInfo * trainingInfo;                //@synthesize trainingInfo=_trainingInfo - In the implementation block
@property (nonatomic,readonly) long long mediaFormat;                                           //@synthesize mediaFormat=_mediaFormat - In the implementation block
@property (nonatomic,copy,readonly) SCSearchDomoSnapRenderingInfo * renderingInfo;              //@synthesize renderingInfo=_renderingInfo - In the implementation block
-(NSString *)domoSnapId;
-(SCSearchDomoSnapTrainingInfo *)trainingInfo;
-(SCSearchDomoSnapRenderingInfo *)renderingInfo;
-(long long)mediaFormat;
-(id)initWithDomoSnapId:(id)arg1 snapInfo:(id)arg2 gcsInfo:(id)arg3 contextInfo:(id)arg4 trainingInfo:(id)arg5 mediaFormat:(long long)arg6 renderingInfo:(id)arg7 ;
-(SCSearchDomoSnapMediaInfo *)snapInfo;
-(SCSearchDomoSnapGcsInfo *)gcsInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCSearchDomoSnapContextInfo *)contextInfo;
@end
