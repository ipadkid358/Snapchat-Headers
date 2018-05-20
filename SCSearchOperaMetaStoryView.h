/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCSearchOperaMetaStoryViewDelegate;
@class SCGradientView, SCLazy, UITapGestureRecognizer, UICollectionView;

@interface SCSearchOperaMetaStoryView : UIView {

	SCGradientView* _gradientView;
	SCLazy* _debugButton;
	UITapGestureRecognizer* _tapToDismissGesture;
	double _originOffsetY;
	UICollectionView* _attachedStoriesView;
	long long _currentState;
	id<SCSearchOperaMetaStoryViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * attachedStoriesView;                            //@synthesize attachedStoriesView=_attachedStoriesView - In the implementation block
@property (nonatomic,readonly) long long currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchOperaMetaStoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_debugGesture:(id)arg1 ;
-(void)setupDebugButton;
-(void)updateGradientViewWithContentTop:(double)arg1 ;
-(UICollectionView *)attachedStoriesView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchOperaMetaStoryViewDelegate>)arg1 ;
-(id<SCSearchOperaMetaStoryViewDelegate>)delegate;
-(long long)currentState;
@end

