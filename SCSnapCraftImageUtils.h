/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class UIImage;

@interface SCSnapCraftImageUtils : NSObject {

	UIImage* _originalUIImage;
	Mat* _original;
	Mat* _splitOriginal[3];
	Mat* _splitStylized[3];
	long long _originalOrientation;

}
-(void)updateImage:(id)arg1 ;
-(void)precomputeLabSplit;
-(id)mixLuminanceAndColor:(float)arg1 ;
-(void)setStylized:(id)arg1 ;
-(void)_fromRGBAtoRGB:(Mat*)arg1 dest:(Mat*)arg2 ;
-(void)splitToLab:(Mat*)arg1 dest:(Mat*)arg2 ;
-(void)_splitUIImageToLab:(id)arg1 dest:(Mat*)arg2 ;
-(id)stylize:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
@end

