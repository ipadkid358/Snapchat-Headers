/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIImageView.h>

@protocol YYAnimatedImage, OS_dispatch_semaphore;
@class UIImage, NSObject, NSOperationQueue, CADisplayLink, NSMutableDictionary, NSString;

@interface YYAnimatedImageView : UIImageView {

	UIImage*<YYAnimatedImage> _curAnimatedImage;
	NSObject*<OS_dispatch_semaphore> _lock;
	NSOperationQueue* _requestQueue;
	CADisplayLink* _link;
	double _time;
	UIImage* _curFrame;
	unsigned long long _curIndex;
	unsigned long long _totalFrameCount;
	BOOL _loopEnd;
	unsigned long long _curLoop;
	unsigned long long _totalLoop;
	NSMutableDictionary* _buffer;
	BOOL _bufferMiss;
	unsigned long long _maxBufferCount;
	long long _incrBufferCount;
	CGRect _curContentsRect;
	BOOL _curImageHasContentsRect;
	BOOL _autoPlayAnimatedImage;
	BOOL _currentIsPlayingAnimation;
	NSString* _runloopMode;
	unsigned long long _maxBufferSize;

}

@property (assign,nonatomic) BOOL currentIsPlayingAnimation;                            //@synthesize currentIsPlayingAnimation=_currentIsPlayingAnimation - In the implementation block
@property (assign,nonatomic) BOOL autoPlayAnimatedImage;                                //@synthesize autoPlayAnimatedImage=_autoPlayAnimatedImage - In the implementation block
@property (assign,nonatomic) unsigned long long currentAnimatedImageIndex; 
@property (nonatomic,copy) NSString * runloopMode;                                      //@synthesize runloopMode=_runloopMode - In the implementation block
@property (assign,nonatomic) unsigned long long maxBufferSize;                          //@synthesize maxBufferSize=_maxBufferSize - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)calcMaxBufferCount;
-(void)setImage:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)resetAnimated;
-(void)imageChanged;
-(unsigned long long)currentImageType;
-(id)imageForType:(unsigned long long)arg1 ;
-(void)setContentsRect:(CGRect)arg1 forImage:(id)arg2 ;
-(void)didMoved;
-(BOOL)currentIsPlayingAnimation;
-(void)setCurrentIsPlayingAnimation:(BOOL)arg1 ;
-(BOOL)autoPlayAnimatedImage;
-(void)setCurrentAnimatedImageIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentAnimatedImageIndex;
-(void)setRunloopMode:(NSString *)arg1 ;
-(void)setAutoPlayAnimatedImage:(BOOL)arg1 ;
-(NSString *)runloopMode;
-(unsigned long long)maxBufferSize;
-(void)setMaxBufferSize:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)initWithImage:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlightedImage:(id)arg1 ;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setAnimationImages:(id)arg1 ;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)step:(id)arg1 ;
-(void)_setDefaultValues;
@end

