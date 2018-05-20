/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCOperaOurStoryViewersContextViewDelegate;
@class UIView, SCOperaContextActionButton;

@interface SCOperaOurStoryViewersContextView : UIView {

	UIView* _horizontalSeparatorView;
	SCOperaContextActionButton* _viewsCountButton;
	SCOperaContextActionButton* _screenshotsCountButton;
	SCOperaContextActionButton* _deleteButton;
	SCOperaContextActionButton* _saveButton;
	id<SCOperaOurStoryViewersContextViewDelegate> _delegate;
	unsigned long long _viewsCount;
	unsigned long long _screenshotsCount;

}

@property (assign,nonatomic,__weak) id<SCOperaOurStoryViewersContextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long viewsCount;                                              //@synthesize viewsCount=_viewsCount - In the implementation block
@property (assign,nonatomic) unsigned long long screenshotsCount;                                        //@synthesize screenshotsCount=_screenshotsCount - In the implementation block
-(void)_onDelete:(id)arg1 ;
-(void)_onSave:(id)arg1 ;
-(void)setViewsCount:(unsigned long long)arg1 ;
-(void)setScreenshotsCount:(unsigned long long)arg1 ;
-(unsigned long long)screenshotsCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCOperaOurStoryViewersContextViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SCOperaOurStoryViewersContextViewDelegate>)delegate;
-(unsigned long long)viewsCount;
@end

