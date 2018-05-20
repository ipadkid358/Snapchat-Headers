/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCOperaPageableViewController.h>

@protocol SCOperaLayer, SCOperaPropertyUpdateModerator, SCOperaPageableViewControllerDelegate;
@class NSMapTable, SCOperaSharedResourceManager, NSObject, SCOperaConfiguration, SCOperaEventListenerAnnouncer, NSString;

@interface SCOperaLayerViewController : UIViewController <SCOperaPageableViewController> {

	NSMapTable* _subviewLayoutConfigs;
	SCOperaSharedResourceManager* _sharedResourceManager;
	NSObject*<SCOperaLayer> _layer;
	SCOperaConfiguration* _configuration;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	id<SCOperaPropertyUpdateModerator> _propertyUpdateModerator;
	id<SCOperaPageableViewControllerDelegate> _pageableViewControllerDelegate;

}

@property (nonatomic,__weak,readonly) SCOperaSharedResourceManager * sharedResourceManager;                                //@synthesize sharedResourceManager=_sharedResourceManager - In the implementation block
@property (nonatomic,retain) NSObject*<SCOperaLayer> layer;                                                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) SCOperaConfiguration * configuration;                                                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) SCOperaEventListenerAnnouncer * eventAnnouncer;                                             //@synthesize eventAnnouncer=_eventAnnouncer - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPropertyUpdateModerator> propertyUpdateModerator;                            //@synthesize propertyUpdateModerator=_propertyUpdateModerator - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate;              //@synthesize pageableViewControllerDelegate=_pageableViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 ;
-(id)gestureDescription;
-(SCOperaEventListenerAnnouncer *)eventAnnouncer;
-(void)viewDidFullyAppear;
-(void)viewDidFullyDisappear;
-(id<SCOperaPageableViewControllerDelegate>)pageableViewControllerDelegate;
-(void)viewWillFullyAppear;
-(void)viewWillFullyAppearAtTime:(SCD_Struct_LS191)arg1 ;
-(void)cancelViewWillFullyAppearAtTime;
-(void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1 ;
-(void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1 ;
-(BOOL)mediaIsBeingPreparedForDisplay;
-(long long)pageabilityForRelativePosition:(unsigned long long)arg1 ;
-(void)setPageableViewControllerDelegate:(id<SCOperaPageableViewControllerDelegate>)arg1 ;
-(BOOL)canHandleRoundCorner;
-(void)didUpdateBottomPageViewProperties:(id)arg1 ;
-(void)setPausedForAttachment:(BOOL)arg1 ;
-(BOOL)isPausedForAttachment;
-(void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2 ;
-(void)didReceiveUpdateProperties:(id)arg1 ;
-(id)currentViewParameters;
-(id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 ;
-(id)shareableMedia;
-(void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(BOOL)arg2 ;
-(void)layoutSubview:(id)arg1 size:(CGSize)arg2 ;
-(id)videoAssetProvider;
-(id<SCOperaPropertyUpdateModerator>)propertyUpdateModerator;
-(BOOL)isRecyclable;
-(void)rotateBasedOnOrientation;
-(void)layoutSubview:(id)arg1 diagonalLength:(double)arg2 verticalOffset:(double)arg3 ;
-(void)layoutSubview:(id)arg1 layoutConfig:(id)arg2 needsLayout:(BOOL)arg3 ;
-(void)layoutSubview:(id)arg1 verticalOffset:(double)arg2 ;
-(void)layoutSubview:(id)arg1 heightToWidthAspectRatio:(double)arg2 docking:(unsigned long long)arg3 verticalOffset:(double)arg4 ;
-(void)layoutSubview:(id)arg1 verticalAlignment:(unsigned long long)arg2 horizontalAlignment:(unsigned long long)arg3 verticalMargin:(double)arg4 horizontalMargin:(double)arg5 ;
-(id)layoutConfigForSubview:(id)arg1 ;
-(void)setPropertyUpdateModerator:(id<SCOperaPropertyUpdateModerator>)arg1 ;
-(NSObject*<SCOperaLayer>)layer;
-(void)stop;
-(void)loadView;
-(void)setLayer:(NSObject*<SCOperaLayer>)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)start;
-(void)viewDidLoad;
-(void)setVolume:(double)arg1 ;
-(void)teardown;
-(void)resume;
-(SCOperaConfiguration *)configuration;
-(void)pause;
-(SCOperaSharedResourceManager *)sharedResourceManager;
-(id)imageProvider;
@end
