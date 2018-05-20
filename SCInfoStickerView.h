/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@interface SCInfoStickerView : UIView
+(id)stickerViewForInfoStickerWithFrame:(CGRect)arg1 config:(id)arg2 target:(long long)arg3 ;
-(void)pan:(id)arg1 ;
-(void)pinch:(id)arg1 ;
-(void)rotation:(id)arg1 ;
-(void)drawScreenshotImageInCurrentContextWithRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 config:(id)arg2 ;
-(BOOL)shouldRespondToTap:(id)arg1 ;
-(void)onScreenshotTaken;
-(id)renderState;
-(void)onStickerViewScaled:(double)arg1 ;
-(BOOL)shouldRespondToTouchControl:(id)arg1 ;
-(BOOL)hasImage;
-(void)tap:(id)arg1 ;
@end

