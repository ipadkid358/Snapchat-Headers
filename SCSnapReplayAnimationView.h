/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol SCSnapReplayConfig;
@class NSString;

@interface SCSnapReplayAnimationView : UIView <CAAnimationDelegate> {

	id<SCSnapReplayConfig> _viewModel;

}

@property (nonatomic,readonly) id<SCSnapReplayConfig> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationCompletionBlockKey;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)animateWithContentMode:(long long)arg1 ;
-(void)hide;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id<SCSnapReplayConfig>)viewModel;
@end

