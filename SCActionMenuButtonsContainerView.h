/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCActionMenuButtonViewDelegate;
@class NSMutableArray, NSArray;

@interface SCActionMenuButtonsContainerView : UIView {

	NSMutableArray* _buttonViews;
	id<SCActionMenuButtonViewDelegate> _delegate;
	NSArray* _buttonViewModels;

}

@property (assign,nonatomic,__weak) id<SCActionMenuButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * buttonViewModels;                                    //@synthesize buttonViewModels=_buttonViewModels - In the implementation block
-(void)didLongPress:(id)arg1 ;
-(NSArray *)buttonViewModels;
-(void)setButtonViewModels:(NSArray *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCActionMenuButtonViewDelegate>)arg1 ;
-(id<SCActionMenuButtonViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
@end

