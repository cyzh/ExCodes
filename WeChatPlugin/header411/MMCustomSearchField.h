//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MMPlaceholderContainerView, MMSearchImageView, NSAttributedString, NSColor, NSString;

@interface MMCustomSearchField : NSView
{
    NSString *_placeholderString;
    NSAttributedString *_placeholderAttributedString;
    double _cornerRadius;
    NSColor *_backgroundColor;
    MMPlaceholderContainerView *_placeholderContainerView;
    MMSearchImageView *_imageView;
    CDUnknownBlockType _resetSearchBlock;
    CDUnknownBlockType _textDidChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType textDidChangeBlock; // @synthesize textDidChangeBlock=_textDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType resetSearchBlock; // @synthesize resetSearchBlock=_resetSearchBlock;
@property(retain, nonatomic) MMSearchImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMPlaceholderContainerView *placeholderContainerView; // @synthesize placeholderContainerView=_placeholderContainerView;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSAttributedString *placeholderAttributedString; // @synthesize placeholderAttributedString=_placeholderAttributedString;
@property(retain, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
- (void).cxx_destruct;
- (BOOL)isTextEditing;
- (void)mmResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *inputValue;
- (id)initWithFrame:(struct CGRect)arg1;

@end

