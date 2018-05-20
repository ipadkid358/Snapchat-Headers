/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCColorPickerControllerDelegate <NSObject>
@required
-(void)didFinishPickingColorFromEyeDrop;
-(void)didStartPickingColorFromEyeDrop;
-(void)willStartPickColorFromEyeDrop:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(CGPoint*)middlePointFromDrawingView:(BOOL)arg1;
-(CGPoint*)dropletMovedToPointInDrawingView:(id)arg1;
-(void)colorPickerController:(id)arg1 didChangeColor:(id)arg2;

@end

