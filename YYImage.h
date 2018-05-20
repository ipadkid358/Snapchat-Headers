/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImage.h>
#import <Snapchat/YYAnimatedImage.h>

@protocol OS_dispatch_semaphore;
@class YYImageDecoder, NSArray, NSObject, NSData, NSString;

@interface YYImage : UIImage <YYAnimatedImage> {

	YYImageDecoder* _decoder;
	NSArray* _preloadedFrames;
	NSObject*<OS_dispatch_semaphore> _preloadedLock;
	unsigned long long _bytesPerFrame;
	double _animatedTotalDuration;
	BOOL _preloadAllAnimatedImageFrames;
	unsigned long long _animatedImageType;
	unsigned long long _animatedImageMemorySize;

}

@property (nonatomic,readonly) unsigned long long animatedImageType;                    //@synthesize animatedImageType=_animatedImageType - In the implementation block
@property (nonatomic,readonly) NSData * animatedImageData; 
@property (nonatomic,readonly) unsigned long long animatedImageMemorySize;              //@synthesize animatedImageMemorySize=_animatedImageMemorySize - In the implementation block
@property (assign,nonatomic) BOOL preloadAllAnimatedImageFrames;                        //@synthesize preloadAllAnimatedImageFrames=_preloadAllAnimatedImageFrames - In the implementation block
@property (nonatomic,readonly) double animatedTotalDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sc_imageWithData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
-(id)animatedImageFrameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)animatedImageFrameCount;
-(unsigned long long)animatedImageLoopCount;
-(unsigned long long)animatedImageBytesPerFrame;
-(double)animatedImageDurationAtIndex:(unsigned long long)arg1 ;
-(double)animatedTotalDuration;
-(NSData *)animatedImageData;
-(void)setPreloadAllAnimatedImageFrames:(BOOL)arg1 ;
-(long long)animatedIndexAtTime:(double)arg1 ;
-(unsigned long long)animatedImageType;
-(unsigned long long)animatedImageMemorySize;
-(BOOL)preloadAllAnimatedImageFrames;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
@end
