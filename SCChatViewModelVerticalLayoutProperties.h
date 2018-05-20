/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface SCChatViewModelVerticalLayoutProperties : NSObject {

	double _tableHeight;
	double _belowTheFoldOffset;
	double _previewOffset;
	NSIndexPath* _firstBelowTheFoldIndexPath;

}

@property (nonatomic,readonly) double tableHeight;                                    //@synthesize tableHeight=_tableHeight - In the implementation block
@property (nonatomic,readonly) double belowTheFoldOffset;                             //@synthesize belowTheFoldOffset=_belowTheFoldOffset - In the implementation block
@property (nonatomic,readonly) double previewOffset;                                  //@synthesize previewOffset=_previewOffset - In the implementation block
@property (nonatomic,readonly) NSIndexPath * firstBelowTheFoldIndexPath;              //@synthesize firstBelowTheFoldIndexPath=_firstBelowTheFoldIndexPath - In the implementation block
-(id)initWithTableHeight:(double)arg1 belowTheFoldOffset:(double)arg2 previewOffset:(double)arg3 firstBelowTheFoldIndexPath:(id)arg4 ;
-(double)belowTheFoldOffset;
-(double)previewOffset;
-(NSIndexPath *)firstBelowTheFoldIndexPath;
-(id)description;
-(double)tableHeight;
@end
