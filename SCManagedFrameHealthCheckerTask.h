/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class UIImage, NSDictionary;

@interface SCManagedFrameHealthCheckerTask : NSObject {

	unsigned long long _type;
	id _targetObject;
	UIImage* _unifiedImage;
	NSDictionary* _metadata;
	NSDictionary* _videoProperties;
	unsigned long long _errorType;
	CGSize _sourceImageSize;

}

@property (assign,nonatomic) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id targetObject;                             //@synthesize targetObject=_targetObject - In the implementation block
@property (assign,nonatomic) CGSize sourceImageSize;                      //@synthesize sourceImageSize=_sourceImageSize - In the implementation block
@property (nonatomic,retain) UIImage * unifiedImage;                      //@synthesize unifiedImage=_unifiedImage - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDictionary * videoProperties;              //@synthesize videoProperties=_videoProperties - In the implementation block
@property (assign,nonatomic) unsigned long long errorType;                //@synthesize errorType=_errorType - In the implementation block
+(id)taskWithType:(unsigned long long)arg1 targetObject:(id)arg2 metadata:(id)arg3 videoProperties:(id)arg4 ;
+(id)taskWithType:(unsigned long long)arg1 targetObject:(id)arg2 metadata:(id)arg3 ;
-(void)setTargetObject:(id)arg1 ;
-(void)setVideoProperties:(NSDictionary *)arg1 ;
-(id)textForSnapType;
-(id)textForSource;
-(id)textForErrorType;
-(id)targetObject;
-(CGSize)sourceImageSize;
-(void)setSourceImageSize:(CGSize)arg1 ;
-(UIImage *)unifiedImage;
-(void)setUnifiedImage:(UIImage *)arg1 ;
-(NSDictionary *)videoProperties;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)errorType;
-(void)setErrorType:(unsigned long long)arg1 ;
@end

