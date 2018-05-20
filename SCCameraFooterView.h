/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SCCameraFooterView : UIView {

	NSArray* _leftItems;
	NSArray* _centerItems;
	NSArray* _rightItems;

}

@property (nonatomic,copy) NSArray * leftItems;                //@synthesize leftItems=_leftItems - In the implementation block
@property (nonatomic,copy) NSArray * centerItems;              //@synthesize centerItems=_centerItems - In the implementation block
@property (nonatomic,copy) NSArray * rightItems;               //@synthesize rightItems=_rightItems - In the implementation block
-(NSArray *)centerItems;
-(void)setCenterItems:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)leftItems;
-(NSArray *)rightItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setRightItems:(NSArray *)arg1 ;
@end

