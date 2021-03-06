/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPreviewDrawingToolBarButtonItemDelegate <NSObject>
@optional
-(void)willStartPickColorFromEyeDropWithCompletion:(/*^block*/id)arg1;
-(void)didFinishPickingColorFromEyeDrop;
-(void)didStartPickingColorFromEyeDrop;

@required
-(void)didAlterDrawing;
-(void)didStartDrawing;
-(void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(BOOL)arg2;
-(void)didPinchBrush;
-(void)drawingMovedToPoint:(CGPoint)arg1;
-(void)drawingToolBarButtonItemDidPressReset:(id)arg1;
-(void)drawingToolBarButtonItemDidPressDrawer:(id)arg1 enabled:(BOOL)arg2;
-(void)drawingToolBarButtonItemDidPressPixelation:(id)arg1 withPixelType:(long long)arg2;
-(void)displayedEmojiBrushAnimation;
-(void)didStartDrawingPixelation;
-(void)didEndDrawingPixelation;

@end

