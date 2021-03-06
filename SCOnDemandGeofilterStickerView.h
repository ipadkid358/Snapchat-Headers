/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTouchControlUIView.h>

@protocol SCStickerProtocol, SCOnDemandGeofilterStickerViewDelegate;
@class UILabel, UIImageView, SCOnDemandGeofilterStickerGestureManager, UIImage;

@interface SCOnDemandGeofilterStickerView : SCTouchControlUIView {

	UILabel* _label;
	UIImageView* _stickerImageView;
	id<SCStickerProtocol> _sticker;
	id<SCOnDemandGeofilterStickerViewDelegate> _delegate;
	SCOnDemandGeofilterStickerGestureManager* _gesture;

}

@property (nonatomic,copy,readonly) id<SCStickerProtocol> sticker;                                    //@synthesize sticker=_sticker - In the implementation block
@property (assign,nonatomic,__weak) id<SCOnDemandGeofilterStickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCOnDemandGeofilterStickerGestureManager * gesture;                      //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,readonly) double minimumScale; 
@property (nonatomic,readonly) double maximumScale; 
@property (nonatomic,readonly) UIImage * image; 
+(double)fontSizeForLineHeight:(double)arg1 ;
-(void)panning:(id)arg1 ;
-(void)pinching:(id)arg1 ;
-(void)rotating:(id)arg1 ;
-(id)stickerTypeToString;
-(id)initWithSticker:(id)arg1 center:(CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 fontSize:(double)arg5 thumbnail:(id)arg6 shouldLimitSize:(BOOL)arg7 userSession:(id)arg8 ;
-(id)_initWithTextSticker:(id)arg1 center:(CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 fontSize:(double)arg5 ;
-(id)_initWithImageSticker:(id)arg1 center:(CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 thumbnail:(id)arg5 shouldLimitSize:(BOOL)arg6 userSession:(id)arg7 ;
-(id)initWithSticker:(id)arg1 center:(CGPoint)arg2 fontSize:(double)arg3 thumbnail:(id)arg4 shouldLimitSize:(BOOL)arg5 userSession:(id)arg6 ;
-(void)scaleDownAndRemove:(CGPoint)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)textFrameContainsGesture:(id)arg1 ;
-(void)setDelegate:(id<SCOnDemandGeofilterStickerViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SCOnDemandGeofilterStickerViewDelegate>)delegate;
-(UIImage *)image;
-(double)maximumScale;
-(double)minimumScale;
-(void)setGesture:(SCOnDemandGeofilterStickerGestureManager *)arg1 ;
-(SCOnDemandGeofilterStickerGestureManager *)gesture;
-(id<SCStickerProtocol>)sticker;
-(void)tapped:(id)arg1 ;
@end

