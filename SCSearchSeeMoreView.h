/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCSearchViewModelConfigurable.h>
#import <Snapchat/SCSearchRoundedCornerConfigurable.h>

@protocol SCSearchSeeMoreViewDelegate;
@class SCShapeView, UILabel, NSString;

@interface SCSearchSeeMoreView : UIView <SCSearchViewModelConfigurable, SCSearchRoundedCornerConfigurable> {

	SCShapeView* _backgroundView;
	UILabel* _viewMoreLabel;
	BOOL _highlighted;
	id _viewModel;
	unsigned long long _roundedCorners;
	id<SCSearchSeeMoreViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL highlighted;                                             //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchSeeMoreViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;                            //@synthesize roundedCorners=_roundedCorners - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)_onTap;
-(void)setRoundedCorner:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchSeeMoreViewDelegate>)arg1 ;
-(id<SCSearchSeeMoreViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(unsigned long long)roundedCorners;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

