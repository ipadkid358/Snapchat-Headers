/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCOperaBlockingViewController.h>

@protocol SCOperaBlockingViewControllerDelegate;
@class SCOperaTapToolTipsLayerView, NSString;

@interface SCOperaTapToolTipsLayerViewController : SCOperaLayerViewController <SCOperaBlockingViewController> {

	SCOperaTapToolTipsLayerView* _layerView;
	BOOL _isDismissing;
	id<SCOperaBlockingViewControllerDelegate> _blockingViewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<SCOperaBlockingViewControllerDelegate> blockingViewControllerDelegate;              //@synthesize blockingViewControllerDelegate=_blockingViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)pageabilityForRelativePosition:(unsigned long long)arg1 ;
-(id<SCOperaBlockingViewControllerDelegate>)blockingViewControllerDelegate;
-(void)didTryPagingWhenPagingDisabled;
-(void)setBlockingViewControllerDelegate:(id<SCOperaBlockingViewControllerDelegate>)arg1 ;
-(BOOL)shouldBlockOtherLayersFromDisplayingWithCurrentPage:(id)arg1 ;
-(BOOL)isRecyclable;
-(void)_updateOperaPropertiesWithBlockingOtherLayers:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isBeingDismissed;
-(BOOL)isBlocking;
@end

