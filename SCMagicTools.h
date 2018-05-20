/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMagicToolsBaseControllerInternalDelegate.h>

@protocol SCMagicToolsDelegate;
@class UIImage, SCMagicToolsState, UIView, NSMutableArray, SCMagicToolsBaseController, SCMagicToolsEditHistory, NSString;

@interface SCMagicTools : NSObject <SCMagicToolsBaseControllerInternalDelegate> {

	UIImage* _capturedImage;
	UIImage* _magicImage;
	SCMagicToolsState* _magicState;
	UIView* _baseView;
	BOOL _isFrontal;
	id<SCMagicToolsDelegate> _delegate;
	long long _selectedMode;
	long long _undoStatus;
	NSMutableArray* _controllers;
	SCMagicToolsBaseController* _selectedToolController;
	SCMagicToolsEditHistory* _editHistory;

}

@property (nonatomic,retain) SCMagicToolsEditHistory * editHistory;                            //@synthesize editHistory=_editHistory - In the implementation block
@property (assign,nonatomic,__weak) id<SCMagicToolsDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedMode;                                           //@synthesize selectedMode=_selectedMode - In the implementation block
@property (assign,nonatomic) long long undoStatus;                                             //@synthesize undoStatus=_undoStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * controllers;                                     //@synthesize controllers=_controllers - In the implementation block
@property (nonatomic,retain) SCMagicToolsBaseController * selectedToolController;              //@synthesize selectedToolController=_selectedToolController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setControllers:(NSMutableArray *)arg1 ;
-(long long)undoStatus;
-(void)setUndoStatus:(long long)arg1 ;
-(id)controllerForType:(long long)arg1 ;
-(void)magicToolsController:(id)arg1 undoWithPatchImage:(id)arg2 forType:(long long)arg3 ;
-(void)magicToolsControllerClearOverlay:(id)arg1 ;
-(id)initWithView:(id)arg1 capturedImage:(id)arg2 fromFrontalCamera:(BOOL)arg3 ;
-(void)setMagicImage:(id)arg1 magicState:(id)arg2 ;
-(void)setSelectedMode:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)setMagicOverlay:(id)arg1 mask:(id)arg2 resource:(id)arg3 forTool:(long long)arg4 ;
-(void)addExistingViewsToArray:(id)arg1 ;
-(void)updateWithCapturedImage:(id)arg1 ;
-(SCMagicToolsBaseController *)selectedToolController;
-(void)setSelectedToolController:(SCMagicToolsBaseController *)arg1 ;
-(SCMagicToolsEditHistory *)editHistory;
-(void)setEditHistory:(SCMagicToolsEditHistory *)arg1 ;
-(void)setDelegate:(id<SCMagicToolsDelegate>)arg1 ;
-(id<SCMagicToolsDelegate>)delegate;
-(void)close;
-(long long)selectedMode;
-(void)setSelectedMode:(long long)arg1 ;
-(NSMutableArray *)controllers;
@end

